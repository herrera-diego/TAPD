/******************************************************************************
* Project Name		: DualToneMultiFrequency TX
* File Name			: main.c
*
*******************************************************************************/

#include <device.h>
#include "stdio.h"
#include "math.h"

/* Project Defines */
#define FALSE  0
#define TRUE   1
#define TRANSMIT_BUFFER_SIZE  16
#define NUMBER_OF_SAMPLES 650
#define SAMPLING_RATE 10000
#define LOW_FREQ_DAC_NUMBER_OF_SAMPLES 200
#define HIGH_FREQ_DAC_NUMBER_OF_SAMPLES 300
#define MASTER_CLOCK_FREQUENCY 24000000
#define LOW_FREQUENCIES_ANALIZED 5
#define HIGH_FREQUENCIES_ANALIZED 4
#define WAIT_CYCLES 13 // 5ms*13=65ms

// FSM
#define STATE_INIT 0
#define STATE_READ_INPUT 1
#define STATE_WAIT_WITH_SIGNAL_ON 2
#define STATE_WAIT_WITH_SIGNAL_OFF 3
#define STATE_DISABLE_OUTPUT 4

/* Transmit Buffer */
char TransmitBuffer[TRANSMIT_BUFFER_SIZE];
// Variables to store ADC data
uint16 Output;
int16 array[NUMBER_OF_SAMPLES];
// DualTone Frequencies
int loFrequency[LOW_FREQUENCIES_ANALIZED] = {150, 697, 770, 852, 941};
int hiFrequency[HIGH_FREQUENCIES_ANALIZED] = {150, 1209, 1336, 1477};
// FSM
uint8 currentState = 0;
uint8 Ch;
// Wait loop
uint8 counterEnable = FALSE;
uint8 counter = 0;


// Function prototypes
void InitSettings(void);
void SetHighFrequencyDacOutput(int OutputFrequency);
void SetLowFrequencyDacOutput(int OutputFrequency);
double Goertzel(int numSamples, int tFrequency, int tSamplingRate, double data[]);
uint16 getMaxValue(double arrayData[], uint8 size);
void DTMF(void);
void DecodeInput(int loFrequency, int hiFrecuency);


/*******************************************************************************
* Interrupt routine
*******************************************************************************/
CY_ISR(SignalON)
{
    if (counterEnable == TRUE)
    {
        counter++;
    }
}


/*******************************************************************************
* Function Name: main
*******************************************************************************/
int main()
{
    currentState = STATE_INIT;
    while(TRUE)
    {
        switch (currentState)
        {    
            //-----------------------------------------------------//
            //-----------------------------------------------------//
            case STATE_INIT:
                
                /* Start the components */
                ADC_DelSig_1_Start();
                UART_1_Start();
                    
                /* Start the ADC conversion */
                ADC_DelSig_1_StartConvert();
                
                // Init Timer
                Timer_Start();
                
                // Enable Interrupts
                isr_StartEx(SignalON);
                CyGlobalIntEnable;
                
                // Init Settings
                // - Output dummy 4KHz sine wave
                // - Turn off blue LED
                InitSettings(); 
                
                // Set state
                currentState = STATE_READ_INPUT;
                
                /* Send message to verify COM port is connected properly */
                UART_1_PutString("TX - Ready\r\n");
                
            break;
                
            //-----------------------------------------------------//
            //-----------------------------------------------------//
            case STATE_READ_INPUT:

                //Non-blocking call to get the latest data recieved  */
                Ch = UART_1_GetChar();
                
                /* Set flags based on UART command */
                switch(Ch)
                {
                    case '0':
                        UART_1_PutString("0");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(941);
                        SetHighFrequencyDacOutput(1336);                       
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;                        
                    break;
                        
                    case '1':
                        UART_1_PutString("1");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(697);
                        SetHighFrequencyDacOutput(1209);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '2':
                        UART_1_PutString("2");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(697);
                        SetHighFrequencyDacOutput(1336);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '3':
                        UART_1_PutString("3");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(697);
                        SetHighFrequencyDacOutput(1477);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '4':
                        UART_1_PutString("4");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(770);
                        SetHighFrequencyDacOutput(1209);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '5':
                        UART_1_PutString("5");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(770);
                        SetHighFrequencyDacOutput(1336);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '6':
                        UART_1_PutString("6");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(770);
                        SetHighFrequencyDacOutput(1477);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '7':
                        UART_1_PutString("7");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(852);
                        SetHighFrequencyDacOutput(1209);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '8':
                        UART_1_PutString("8");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(852);
                        SetHighFrequencyDacOutput(1336);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '9':
                        UART_1_PutString("9");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(852);
                        SetHighFrequencyDacOutput(1477);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '*':
                        UART_1_PutString("*");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(941);
                        SetHighFrequencyDacOutput(1209);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    break;
                        
                    case '#':
                        UART_1_PutString("#");
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(941);
                        SetHighFrequencyDacOutput(1477);
                        // Set next state
                        currentState = STATE_WAIT_WITH_SIGNAL_ON;
                    
                    break;
                    
                    case 'D':
                    case 'd':
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
                        UART_1_PutString("-----> Samples Init\r\n");
                        for (int16 sampleNumber = 0; sampleNumber < NUMBER_OF_SAMPLES; sampleNumber ++)
                        {
                            sprintf(TransmitBuffer, "%d\r\n", array[sampleNumber]);
                            UART_1_PutString(TransmitBuffer);
                        }
                        UART_1_PutString("-----> Samples End\r\n");
                        
                        // Decode data              
                        DTMF(); 
                        
                        // Set next state
                        currentState = STATE_READ_INPUT;
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
                        
                        // Decode data              
                        DTMF(); 
                        
                        // Set next state
                        currentState = STATE_READ_INPUT;
                        
                    break;
                    
                    case 'X':    
                    case 'x':
                        UART_1_PutString("Dummy Frequency ...\r\n");  
                        // Configure Output frequency
                        SetLowFrequencyDacOutput(150);
                        SetHighFrequencyDacOutput(150);
                        // Turn Off blue LED
                        Blue_LED_Write(0);
                        // Set next state
                        currentState = STATE_READ_INPUT;
                    break;
                        
                    default:
                        /* Place error handling code here */
                        currentState = STATE_READ_INPUT;
                    break;    
                }
                
            break;
            
            //-----------------------------------------------------//
            //-----------------------------------------------------//
            case STATE_WAIT_WITH_SIGNAL_ON:
                // Turn on BLUE LED
                Blue_LED_Write(1);
                
                counterEnable = TRUE;
                while (counter < WAIT_CYCLES)
                {
                    // Wait here to prevent new input commands
                }
                
                // Restart counter variables
                counterEnable = FALSE;
                counter = 0;
                
                // Set next state
                currentState = STATE_DISABLE_OUTPUT;
                
            break;
            
            //-----------------------------------------------------//
            //-----------------------------------------------------//
            case STATE_DISABLE_OUTPUT:
                
                // Configure Output frequency
                SetLowFrequencyDacOutput(150);
                SetHighFrequencyDacOutput(150);
                // Turn Off blue LED
                Blue_LED_Write(0);               
                
                // Set next state
                currentState = STATE_WAIT_WITH_SIGNAL_OFF;
                
            break;
            
            //-----------------------------------------------------//
            //-----------------------------------------------------//
            case STATE_WAIT_WITH_SIGNAL_OFF:
                
                counterEnable = TRUE;
                while (counter < WAIT_CYCLES)
                {
                    // Wait here to prevent new input commands
                }
                
                // Restart counter variables
                counterEnable = FALSE;
                counter = 0;
                
                // Set next state
                currentState = STATE_READ_INPUT;
                
            break;

        } // End "Switch(currentState)"
    } // End "While(TRUE)"
} // End "Main(void)"

/*******************************************************************************
* Function - Init Settings
*******************************************************************************/
void SetHighFrequencyDacOutput(int OutputFrequency)
{   
    double KSPS = HIGH_FREQ_DAC_NUMBER_OF_SAMPLES * OutputFrequency;
    double ClockDivider = MASTER_CLOCK_FREQUENCY / KSPS;
    HF_DAC_CLK_SetDividerValue((int)ClockDivider);
}

/*******************************************************************************
* Function - Init Settings
*******************************************************************************/
void SetLowFrequencyDacOutput(int OutputFrequency)
{   
    double KSPS = LOW_FREQ_DAC_NUMBER_OF_SAMPLES * OutputFrequency; 
    double ClockDivider = MASTER_CLOCK_FREQUENCY / KSPS;
    LF_DAC_CLK_SetDividerValue((int)ClockDivider);
}

/*******************************************************************************
* Function - Init Settings
*******************************************************************************/
void InitSettings(void)
{   
    // Configure Muxes
    HF_SW1_Write(0);    
    LF_SW1_Write(0);
    
    // Configure DAC's external clocks
    SetLowFrequencyDacOutput(150);
    SetHighFrequencyDacOutput(150);
    
    // Enable Components
    HF_DAC_1_Start();   // (3,6,9,#,Dummy)
    LF_DAC_1_Start();   // (7,8,9,*,0,#)
}

/*******************************************************************************
* Function - Find DTMF Frequencies
*******************************************************************************/
void DTMF()
{
    double signal[NUMBER_OF_SAMPLES];
    for(int i = 0; i < NUMBER_OF_SAMPLES; i++)
    {
        double pdata = (double)array[i];
        pdata = pdata*0.5;
        pdata = pdata/128;
        signal[i] = pdata;
    }
    
    double loAmplitudes[LOW_FREQUENCIES_ANALIZED] = {0, 0, 0, 0, 0};
    double hiAmplitudes[HIGH_FREQUENCIES_ANALIZED] = {0, 0, 0, 0};
    
    for(uint8 i = 0; i < LOW_FREQUENCIES_ANALIZED; i++)
    {
        loAmplitudes[i] = Goertzel(NUMBER_OF_SAMPLES,loFrequency[i],SAMPLING_RATE, signal);
    }
    
    for(uint8 i = 0; i < HIGH_FREQUENCIES_ANALIZED; i++)
    {
        hiAmplitudes[i] = Goertzel(NUMBER_OF_SAMPLES,hiFrequency[i],SAMPLING_RATE, signal);
    }
    
    uint16 loAmp = getMaxValue(loAmplitudes, LOW_FREQUENCIES_ANALIZED);
    uint16 hiAmp = getMaxValue(hiAmplitudes, HIGH_FREQUENCIES_ANALIZED);   
    
    // Print the low and High frequencies found
    sprintf(TransmitBuffer, "Lo=%dHz", loFrequency[loAmp]);
    UART_1_PutString(TransmitBuffer);
    UART_1_PutString(" - ");
    sprintf(TransmitBuffer, "Hi=%dHz\r\n", hiFrequency[hiAmp]);
    UART_1_PutString(TransmitBuffer);
    
    // Decode the pressed key value
    DecodeInput(loFrequency[loAmp], hiFrequency[hiAmp]);
}

/*******************************************************************************
* Function - Goertzel algorithm
*******************************************************************************/
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

/*******************************************************************************
* Function - Find max value of given array
*******************************************************************************/
uint16 getMaxValue(double *arrayData, uint8 size)
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

/*******************************************************************************
* Function - Decode the frequencies found
*******************************************************************************/
void DecodeInput(int lo, int hi)
{
    // Keys 1,2,3
    if ( (lo == loFrequency[1]) && (hi == hiFrequency[1]))
        UART_1_PutString("Decoded=1\r\n");
    if ( (lo == loFrequency[1]) && (hi == hiFrequency[2]))
        UART_1_PutString("Decoded=2\r\n");
    if ( (lo == loFrequency[1]) && (hi == hiFrequency[3]))
        UART_1_PutString("Decoded=3\r\n");
    
    // Keys 4,5,6    
    if ( (lo == loFrequency[2]) && (hi == hiFrequency[1]))
        UART_1_PutString("Decoded=4\r\n");
    if ( (lo == loFrequency[2]) && (hi == hiFrequency[2]))
        UART_1_PutString("Decoded=5\r\n");
    if ( (lo == loFrequency[2]) && (hi == hiFrequency[3]))
        UART_1_PutString("Decoded=6\r\n");
    
    // Keys 7,8,9   
    if ( (lo == loFrequency[3]) && (hi == hiFrequency[1]))
        UART_1_PutString("Decoded=7\r\n");
    if ( (lo == loFrequency[3]) && (hi == hiFrequency[2]))
        UART_1_PutString("Decoded=8\r\n");
    if ( (lo == loFrequency[3]) && (hi == hiFrequency[3]))
        UART_1_PutString("Decoded=9\r\n");
    
    // Keys *,0,#    
    if ( (lo == loFrequency[4]) && (hi == hiFrequency[1]))
        UART_1_PutString("Decoded=*\r\n");
    if ( (lo == loFrequency[4]) && (hi == hiFrequency[2]))
        UART_1_PutString("Decoded=0\r\n");
    if ( (lo == loFrequency[4]) && (hi == hiFrequency[3]))
        UART_1_PutString("Decoded=#\r\n");   
    
    // Dummy Frequencies    
    if ( (lo == loFrequency[0]) || (hi == hiFrequency[0]) )
        UART_1_PutString("Decoded=Dummy\r\n");
 
}


/* [] END OF FILE */
