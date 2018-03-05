/*******************************************************************************
* File Name: HF_DAC_1.c
* Version 2.10
*
* Description:
*  This file provides the source code for the 8-bit Waveform DAC 
*  (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "HF_DAC_1.h"

uint8  HF_DAC_1_initVar = 0u;

const uint8 CYCODE HF_DAC_1_wave1[HF_DAC_1_WAVE1_LENGTH] = { 128u,129u,130u,131u,133u,134u,135u,137u,138u,139u,140u,142u,143u,144u,146u,147u,148u,149u,151u,152u,153u,154u,155u,156u,158u,159u,160u,161u,162u,163u,164u,165u,166u,167u,168u,169u,170u,171u,172u,173u,174u,175u,176u,176u,177u,178u,179u,180u,180u,181u,182u,182u,183u,183u,184u,185u,185u,186u,186u,187u,187u,187u,188u,188u,188u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,188u,188u,188u,187u,187u,187u,186u,186u,185u,185u,184u,183u,183u,182u,182u,181u,180u,180u,179u,178u,177u,176u,176u,175u,174u,173u,172u,171u,170u,169u,168u,167u,166u,165u,164u,163u,162u,161u,160u,159u,158u,156u,155u,154u,153u,152u,151u,149u,148u,147u,146u,144u,143u,142u,140u,139u,138u,137u,135u,134u,133u,131u,130u,129u,128u,126u,125u,124u,122u,121u,120u,118u,117u,116u,115u,113u,112u,111u,109u,108u,107u,106u,104u,103u,102u,101u,100u,99u,97u,96u,95u,94u,93u,92u,91u,90u,89u,88u,87u,86u,85u,84u,83u,82u,81u,80u,79u,79u,78u,77u,76u,75u,75u,74u,73u,73u,72u,72u,71u,70u,70u,69u,69u,68u,68u,68u,67u,67u,67u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,67u,67u,67u,68u,68u,68u,69u,69u,70u,70u,71u,72u,72u,73u,73u,74u,75u,75u,76u,77u,78u,79u,79u,80u,81u,82u,83u,84u,85u,86u,87u,88u,89u,90u,91u,92u,93u,94u,95u,96u,97u,99u,100u,101u,102u,103u,104u,106u,107u,108u,109u,111u,112u,113u,115u,116u,117u,118u,120u,121u,122u,124u,125u,126u };
const uint8 CYCODE HF_DAC_1_wave2[HF_DAC_1_WAVE2_LENGTH] = { 128u,128u,128u,128u };

static uint8  HF_DAC_1_Wave1Chan;
static uint8  HF_DAC_1_Wave2Chan;
static uint8  HF_DAC_1_Wave1TD;
static uint8  HF_DAC_1_Wave2TD;


/*******************************************************************************
* Function Name: HF_DAC_1_Init
********************************************************************************
*
* Summary:
*  Initializes component with parameters set in the customizer.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void HF_DAC_1_Init(void) 
{
	HF_DAC_1_VDAC8_Init();
	HF_DAC_1_VDAC8_SetSpeed(HF_DAC_1_HIGHSPEED);
	HF_DAC_1_VDAC8_SetRange(HF_DAC_1_DAC_RANGE);

	#if(HF_DAC_1_DAC_MODE == HF_DAC_1_CURRENT_MODE)
		HF_DAC_1_IDAC8_SetPolarity(HF_DAC_1_DAC_POL);
	#endif /* HF_DAC_1_DAC_MODE == HF_DAC_1_CURRENT_MODE */

	#if(HF_DAC_1_OUT_MODE == HF_DAC_1_BUFFER_MODE)
	   HF_DAC_1_BuffAmp_Init();
	#endif /* HF_DAC_1_OUT_MODE == HF_DAC_1_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	HF_DAC_1_Wave1TD = CyDmaTdAllocate();
	HF_DAC_1_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	HF_DAC_1_Wave1Setup(HF_DAC_1_wave1, HF_DAC_1_WAVE1_LENGTH) ;
	HF_DAC_1_Wave2Setup(HF_DAC_1_wave2, HF_DAC_1_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(HF_DAC_1_DacClk_PHASE)
	   HF_DAC_1_DacClk_SetPhase(HF_DAC_1_CLK_PHASE_0nS);
	#endif /* defined(HF_DAC_1_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: HF_DAC_1_Enable
********************************************************************************
*  
* Summary: 
*  Enables the DAC block and DMA operation.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void HF_DAC_1_Enable(void) 
{
	HF_DAC_1_VDAC8_Enable();

	#if(HF_DAC_1_OUT_MODE == HF_DAC_1_BUFFER_MODE)
	   HF_DAC_1_BuffAmp_Enable();
	#endif /* HF_DAC_1_OUT_MODE == HF_DAC_1_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(HF_DAC_1_Wave1Chan, 1u);
	(void)CyDmaChEnable(HF_DAC_1_Wave2Chan, 1u);
	
	/* set the initial value */
	HF_DAC_1_SetValue(0u);
	
	#if(HF_DAC_1_CLOCK_SRC == HF_DAC_1_CLOCK_INT)  	
	   HF_DAC_1_DacClk_Start();
	#endif /* HF_DAC_1_CLOCK_SRC == HF_DAC_1_CLOCK_INT */
}


/*******************************************************************************
* Function Name: HF_DAC_1_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as 
*  executing the stop function.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void HF_DAC_1_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(HF_DAC_1_initVar == 0u)
	{
		HF_DAC_1_Init();
		HF_DAC_1_initVar = 1u;
	}
	
	HF_DAC_1_Enable();
}


/*******************************************************************************
* Function Name: HF_DAC_1_StartEx
********************************************************************************
*
* Summary:
*  The StartEx function sets pointers and sizes for both waveforms
*  and then starts the component.
*
* Parameters:  
*   uint8 * wavePtr1:     Pointer to the waveform 1 array.
*   uint16  sampleSize1:  The amount of samples in the waveform 1.
*   uint8 * wavePtr2:     Pointer to the waveform 2 array.
*   uint16  sampleSize2:  The amount of samples in the waveform 2.
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void HF_DAC_1_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	HF_DAC_1_Wave1Setup(wavePtr1, sampleSize1);
	HF_DAC_1_Wave2Setup(wavePtr2, sampleSize2);
	HF_DAC_1_Start();
}


/*******************************************************************************
* Function Name: HF_DAC_1_Stop
********************************************************************************
*
* Summary:
*  Stops the clock (if internal), disables the DMA channels
*  and powers down the DAC.
*
* Parameters:  
*  None  
*
* Return: 
*  None
*
*******************************************************************************/
void HF_DAC_1_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(HF_DAC_1_CLOCK_SRC == HF_DAC_1_CLOCK_INT)  	
	   HF_DAC_1_DacClk_Stop();
	#endif /* HF_DAC_1_CLOCK_SRC == HF_DAC_1_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(HF_DAC_1_Wave1Chan);
	(void)CyDmaChDisable(HF_DAC_1_Wave2Chan);

	/* Disable power to DAC */
	HF_DAC_1_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: HF_DAC_1_Wave1Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 1.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None 
*
*******************************************************************************/
void HF_DAC_1_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (HF_DAC_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		HF_DAC_1_Wave1Chan = HF_DAC_1_Wave1_DMA_DmaInitialize(
		HF_DAC_1_Wave1_DMA_BYTES_PER_BURST, HF_DAC_1_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		HF_DAC_1_Wave1Chan = HF_DAC_1_Wave1_DMA_DmaInitialize(
		HF_DAC_1_Wave1_DMA_BYTES_PER_BURST, HF_DAC_1_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(HF_DAC_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(HF_DAC_1_Wave1TD, sampleSize, HF_DAC_1_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)HF_DAC_1_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(HF_DAC_1_Wave1TD, LO16((uint32)wavePtr), LO16(HF_DAC_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(HF_DAC_1_Wave1Chan, HF_DAC_1_Wave1TD);
}


/*******************************************************************************
* Function Name: HF_DAC_1_Wave2Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 2.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None
*
*******************************************************************************/
void HF_DAC_1_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (HF_DAC_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		HF_DAC_1_Wave2Chan = HF_DAC_1_Wave2_DMA_DmaInitialize(
		HF_DAC_1_Wave2_DMA_BYTES_PER_BURST, HF_DAC_1_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		HF_DAC_1_Wave2Chan = HF_DAC_1_Wave2_DMA_DmaInitialize(
		HF_DAC_1_Wave2_DMA_BYTES_PER_BURST, HF_DAC_1_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(HF_DAC_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(HF_DAC_1_Wave2TD, sampleSize, HF_DAC_1_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)HF_DAC_1_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(HF_DAC_1_Wave2TD, LO16((uint32)wavePtr), LO16(HF_DAC_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(HF_DAC_1_Wave2Chan, HF_DAC_1_Wave2TD);
}


/* [] END OF FILE */
