/******************************************************************************
* Project Name		: CE95277 ADC and UART
* File Name			: main.c
* Version 			: **
* Device Used		: CY8C5888LTI-LP097
* Software Used		: PSoC Creator 3.1 SP2
* Compiler    		: ARM GCC 4.8.4, ARM RVDS Generic, ARM MDK Generic
* Related Hardware	: CY8CKIT059 PSoC 5 LP Prototyping Kit 
* Owner				: KLMZ
*
********************************************************************************
* Copyright (2015), Cypress Semiconductor Corporation. All Rights Reserved.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress)
* and is protected by and subject to worldwide patent protection (United
* States and foreign), United States copyright laws and international treaty
* provisions. Cypress hereby grants to licensee a personal, non-exclusive,
* non-transferable license to copy, use, modify, create derivative works of,
* and compile the Cypress Source Code and derivative works for the sole
* purpose of creating custom software in support of licensee product to be
* used only in conjunction with a Cypress integrated circuit as specified in
* the applicable agreement. Any reproduction, modification, translation,
* compilation, or representation of this software except as specified above 
* is prohibited without the express written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH 
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the 
* materials described herein. Cypress does not assume any liability arising out 
* of the application or use of any product or circuit described herein. Cypress 
* does not authorize its products for use as critical components in life-support 
* systems where a malfunction or failure may reasonably be expected to result in 
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of 
* such use and in doing so indemnifies Cypress against all charges. 
*
* Use of this Software may be limited by and subject to the applicable Cypress
* software license agreement. 
*******************************************************************************/

#include <device.h>
#include "stdio.h"
#include "math.h"

/* Project Defines */
#define FALSE  0
#define TRUE   1
#define TRANSMIT_BUFFER_SIZE  16
#define NUMBER_OF_SAMPLES 2000
#define SAMPLING_RATE 10000

    /* Variable to store ADC result */
    uint16 Output;
    /* Flags used to store transmit data commands */
    uint8 ContinuouslySendData;
    uint8 SendSingleByte;
    uint8 SendEmulatedData;
    /* Transmit Buffer */
    char TransmitBuffer[TRANSMIT_BUFFER_SIZE];
    /* Variable used to send emulated data */
    uint8 EmulatedData;
    int16 array[NUMBER_OF_SAMPLES];
    
double Goertzel(int numSamples, int tFrequency,int tSamplingRate, double data[]);
uint16 getMaxValue(double arrayData[],uint8 size);
void DTMF(void);
void Decoder(uint16 loFrec, uint16 hiFrec);


CY_ISR_PROTO(Transmit);

CY_ISR(Transmit)
{
            /* Check to see if an ADC conversion has completed */
            if(ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS))
            {
                /* Use the GetResult16 API to get an 8 bit unsigned result in
                * single ended mode.  The API CountsTo_mVolts is then used
                * to convert the ADC counts into mV before transmitting via
                * the UART.  See the datasheet API description for more
                * details */
                //Output = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_GetResult16());
                Output = ADC_DelSig_1_GetResult16();
                
                /* Send data based on last UART command */
                if(ContinuouslySendData)
                {
                    /* Format ADC result for transmition */
                    //sprintf(TransmitBuffer, "Sample: %d mV\r\n", Output);
                    sprintf(TransmitBuffer, "%X\r\n", Output);
                    /* Send out the data */
                    UART_1_PutString(TransmitBuffer);
                    /* Reset the send once flag */
                    SendSingleByte = FALSE;
                }
                /* Send data based on last UART command */
                else if(SendSingleByte)
                {
                    /* Format ADC result for transmition */
                    //sprintf(TransmitBuffer, "Sample: %d mV\r\n", Output);
                    sprintf(TransmitBuffer, "%X\r\n", Output);
                    /* Send out the data */
                    UART_1_PutString(TransmitBuffer);
                    /* Reset the send once flag */
                    SendSingleByte = FALSE;
                }
                else if(SendEmulatedData)
                {
                    /* Format ADC result for transmition */
                    sprintf(TransmitBuffer, "%x\r\n", EmulatedData);
                    /* Send out the data */
                    UART_1_PutString(TransmitBuffer);
                    EmulatedData++;
                    /* Reset the send once flag */
                    SendEmulatedData = FALSE;
                }
            }
            
    
}



CY_ISR(UserInput)
{
    //UART_1_PutString("Input Detected!\r\n");
}




void DisableAllDigitalToAnalogConverters()
{
    // Disable Components
    HF_DAC_1_Sleep();
    HF_DAC_2_Sleep();
    LF_DAC_1_Sleep(); 
    LF_DAC_2_Sleep();
    // Set Muxes to First Wave Configured
    HF_SW1_Write(0);
    HF_SW2_Write(0);
    LF_SW1_Write(0);
    LF_SW2_Write(0);
    // Input Flag
    Input_Flag_Write(0);
}






/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  main() performs following functions:
*  1: Starts the ADC and UART components.
*  2: Checks for ADC end of conversion.  Stores latest result in output
*     if conversion complete.
*  3: Checks for UART input.
*     On 'C' or 'c' received: transmits the last sample via the UART.
*     On 'S' or 's' received: continuously transmits samples as they are completed.
*     On 'X' or 'x' received: stops continuously transmitting samples.
*     On 'E' or 'e' received: transmits a dummy byte of data.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    /* Variable to store UART received character */
    uint8 Ch;
    
    /* Start the components */
    ADC_DelSig_1_Start();
    UART_1_Start();
    // 1st ADC
    HF_DAC_1_Start();
    HF_DAC_1_Sleep();
    // 2nd ADC
    HF_DAC_2_Start();
    HF_DAC_2_Sleep();;
    // 3rd ADC
    LF_DAC_1_Start();
    LF_DAC_1_Sleep();
    // 4th ADC
    LF_DAC_1_Start();
    LF_DAC_1_Sleep();
    
    /* Initialize Variables */
    ContinuouslySendData = FALSE;
    SendSingleByte = FALSE;
    SendEmulatedData = FALSE;
    EmulatedData = 0;
    
    /* Start the ADC conversion */
    ADC_DelSig_1_StartConvert();
    
    /* Send message to verify COM port is connected properly */
    //UART_1_PutString("COM Port Open");
    
    Timer_Start();
    isr_StartEx(Transmit);
    Input_ISR_StartEx(UserInput);
    CyGlobalIntEnable;
    
    
    for(;;)
    {        
        /* Non-blocking call to get the latest data recieved  */
        Ch = UART_1_GetChar();
        
        /* Set flags based on UART command */
        switch(Ch)
        {
            case '0':
                UART_1_PutString("0");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                //HF_SW1_Write(0);    // 1209 Hz (1,4,7,*)
                //HF_SW1_Write(1);    // 1336 Hz (2,5,8,0)
                //HF_SW2_Write(0);    // 1477 Hz (3,6,9,#)
                //HF_SW2_Write(1);    // -
                //LF_SW1_Write(0);    // 697  Hz (1,2,3)
                //LF_SW1_Write(1);    // 770  Hz (4,5,6)
                //LF_SW2_Write(0);    // 852  Hz (7,8,9)
                //LF_SW2_Write(1);    // 941  Hz (*,0,#)
                
                // Enable Components
                //HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                //HF_DAC_2_Start();   // (3,6,9,#)
                //LF_DAC_1_Start();   // (1,2,3,4,5,6)
                //LF_DAC_2_Start();   // (7,8,9,*,0,#)             
                
                // Configure Muxes
                HF_SW1_Write(1);    // 1336 Hz (2,5,8,0)
                LF_SW2_Write(1);    // 941  Hz (*,0,#)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_2_Start();   // (7,8,9,*,0,#)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '1':
                UART_1_PutString("1");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(0);    // 1209 Hz (1,4,7,*)
                LF_SW1_Write(0);    // 697  Hz (1,2,3)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_1_Start();   // (1,2,3,4,5,6)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '2':
                UART_1_PutString("2");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(1);    // 1336 Hz (2,5,8,0)
                LF_SW1_Write(0);    // 697  Hz (1,2,3)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_1_Start();   // (1,2,3,4,5,6)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '3':
                UART_1_PutString("3");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW2_Write(0);    // 1477 Hz (3,6,9,#)
                LF_SW1_Write(0);    // 697  Hz (1,2,3)
                
                // Enable Components
                HF_DAC_2_Start();   // (3,6,9,#)
                LF_DAC_1_Start();   // (1,2,3,4,5,6)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '4':
                UART_1_PutString("4");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(0);    // 1209 Hz (1,4,7,*)
                LF_SW1_Write(1);    // 770  Hz (4,5,6)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_1_Start();   // (1,2,3,4,5,6)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '5':
                UART_1_PutString("5");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(1);    // 1336 Hz (2,5,8,0)
                LF_SW1_Write(1);    // 770  Hz (4,5,6)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_1_Start();   // (1,2,3,4,5,6)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '6':
                UART_1_PutString("6");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW2_Write(0);    // 1477 Hz (3,6,9,#)
                LF_SW1_Write(1);    // 770  Hz (4,5,6)
                
                // Enable Components
                HF_DAC_2_Start();   // (3,6,9,#)
                LF_DAC_1_Start();   // (1,2,3,4,5,6)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '7':
                UART_1_PutString("7");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(0);    // 1209 Hz (1,4,7,*)
                LF_SW2_Write(0);    // 852  Hz (7,8,9)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_2_Start();   // (7,8,9,*,0,#)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '8':
                UART_1_PutString("8");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(1);    // 1336 Hz (2,5,8,0)
                LF_SW2_Write(0);    // 852  Hz (7,8,9)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_2_Start();   // (7,8,9,*,0,#)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '9':
                UART_1_PutString("9");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW2_Write(0);    // 1477 Hz (3,6,9,#)
                LF_SW2_Write(0);    // 852  Hz (7,8,9)
                
                // Enable Components
                HF_DAC_2_Start();   // (3,6,9,#)
                LF_DAC_2_Start();   // (7,8,9,*,0,#)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '*':
                UART_1_PutString("*");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW1_Write(0);    // 1209 Hz (1,4,7,*)
                LF_SW2_Write(1);    // 941  Hz (*,0,#)
                
                // Enable Components
                HF_DAC_1_Start();   // (1,2,4,5,7,8,*,0)
                LF_DAC_2_Start();   // (7,8,9,*,0,#)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;
                
            case '#':
                UART_1_PutString("#");
                DisableAllDigitalToAnalogConverters();
                
                // Configure Muxes
                HF_SW2_Write(0);    // 1477 Hz (3,6,9,#)
                LF_SW2_Write(1);    // 941  Hz (*,0,#)
                
                // Enable Components
                HF_DAC_2_Start();   // (3,6,9,#)
                LF_DAC_2_Start();   // (7,8,9,*,0,#)
                
                // Trigger "User Input" Interrupt
                Input_Flag_Write(1);
                
                break;

            case 'S':
            case 's':
                //Get Samples
                for (int16 sampleNumber = 0; sampleNumber < NUMBER_OF_SAMPLES; sampleNumber += 0)
                {                 
                    /* Check to see if an ADC conversion has completed */
                    if(ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS))
                    {
                        Output = ADC_DelSig_1_GetResult16();
                        array[sampleNumber] = Output;                       
                        sampleNumber ++;
                    }
                }
                // Print samples 
                //for (int16 sampleNumber = 0; sampleNumber < NUMBER_OF_SAMPLES; sampleNumber ++)
                //{
                    //sprintf(TransmitBuffer, "%d\r\n", array[sampleNumber]);
                    //UART_1_PutString(TransmitBuffer);
                //}
                // Decode data
                
                DTMF();              
                
                break;
            
            case 'X':    
            case 'x':
                UART_1_PutString("Disabling DACs ...");
                DisableAllDigitalToAnalogConverters();
                
                break;
                
            default:
                /* Place error handling code here */
                break;    
        }
        
    }
}



void DTMF()
{
    //UART_1_PutString("DTMF\n\r");
    double signal[NUMBER_OF_SAMPLES];
    for(int i = 0; i < NUMBER_OF_SAMPLES; i++)
    {
        double pdata = (double)array[i];
        pdata = pdata*0.5;
        pdata = pdata/128;
        signal[i] = pdata;
    }
    
    
    double loAmplitudes[4] = {0, 0, 0, 0};
    double hiAmplitudes[3] = {0, 0, 0};
    int loFrequency[4] = {697, 770, 852, 941};
    int hiFrecuency[3] = {1209, 1336, 1477};
    
    for(uint8 i = 0; i < 4; i++)
    {
        loAmplitudes[i] = Goertzel(NUMBER_OF_SAMPLES,loFrequency[i],SAMPLING_RATE, signal);
    }
    
    for(uint8 i = 0; i < 3; i++)
    {
        hiAmplitudes[i] = Goertzel(NUMBER_OF_SAMPLES,hiFrecuency[i],SAMPLING_RATE, signal);
    }
    
    uint16 loAmp = getMaxValue(loAmplitudes, 4);
    uint16 hiAmp = getMaxValue(hiAmplitudes, 3);
    
    
    sprintf(TransmitBuffer, "Lo=%d\r\n", loFrequency[loAmp]);
    UART_1_PutString(TransmitBuffer);
    sprintf(TransmitBuffer, "Hi=%d\r\n", hiFrecuency[hiAmp]);
    UART_1_PutString(TransmitBuffer);
}

double Goertzel(int numSamples, int tFrequency,int tSamplingRate, double data[])
{
    int k;
    int i;
    double floatnumSamples;
    double omega;
    double sine;
    double cosine;
    double coeff;
    double q0;
    double q1;
    double q2;
    double magnitude;
    double real;
    double imag;
    
    double scalingFactor = numSamples / 2.0;

    floatnumSamples = numSamples;
    k = (0.5 + ((floatnumSamples * tFrequency) / tSamplingRate));
    omega = (2.0 * M_PI * k) / floatnumSamples;
    sine = sin(omega);
    cosine = cos(omega);
    coeff = 2.0 * cosine;
    q0=0;
    q1=0;
    q2=0;
    
    for(uint16 i = 0; i < numSamples; i++)
    {
        double mdata =  data[i];
        
        q0 = coeff * q1 - q2 + mdata;
        q2 = q1;
        q1 = q0;
    }

    // calculate the real and imaginary results
    // scaling appropriately
    real = (q1 - q2 * cosine) / scalingFactor;
    imag = (q2 * sine) / scalingFactor;

    magnitude = sqrt(real*real + imag*imag);
    return magnitude;
}

uint16 getMaxValue(double *arrayData,uint8 size)
{
    double maxValue = arrayData[0];
    uint16 index = 0;
    for (uint16 i = 1; i < size; ++i) 
    {
        if ( arrayData[i] > maxValue ) 
        {
            maxValue = arrayData[i];
            index = i;
        }
    }
    
    return index;
}

void Decoder(uint16 loFrec, uint16 hiFrec)
{
    uint16 data = loFrec & hiFrec;
    
    switch(data)
    {
        case 1906:
            UART_1_PutString("1\n\r");
            break;
        case 2033:
            UART_1_PutString("2\n\r");
            break;
        case 2174:
            UART_1_PutString("3\n\r");
            break;
        case 1979:
            UART_1_PutString("4\n\r");
            break;
        case 2106:
            UART_1_PutString("5\n\r");
            break;
        case 2247:
            UART_1_PutString("6\n\r");
            break;
        case 2061:
            UART_1_PutString("7\n\r");
            break;
        case 2188:
            UART_1_PutString("8\n\r");
            break;
        case 2329:
            UART_1_PutString("9\n\r");
            break;
        case 2150:
            UART_1_PutString("*\n\r");
            break;
        case 2277:
            UART_1_PutString("0\n\r");
            break;
        case 2418:
            UART_1_PutString("#\n\r");
            break;
         default:
            break;
    }
}



/* [] END OF FILE */
