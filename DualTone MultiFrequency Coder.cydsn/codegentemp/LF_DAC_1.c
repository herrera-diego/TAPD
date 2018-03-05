/*******************************************************************************
* File Name: LF_DAC_1.c
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

#include "LF_DAC_1.h"

uint8  LF_DAC_1_initVar = 0u;

const uint8 CYCODE LF_DAC_1_wave1[LF_DAC_1_WAVE1_LENGTH] = { 128u,128u,128u,129u,129u,129u,130u,130u,130u,131u,131u,131u,132u,132u,132u,133u,133u,133u,134u,134u,134u,135u,135u,135u,136u,136u,136u,137u,137u,137u,138u,138u,138u,139u,139u,139u,140u,140u,140u,141u,141u,141u,142u,142u,142u,143u,143u,143u,144u,144u,144u,145u,145u,145u,146u,146u,146u,147u,147u,147u,148u,148u,148u,149u,149u,149u,150u,150u,150u,151u,151u,151u,152u,152u,152u,152u,153u,153u,153u,154u,154u,154u,155u,155u,155u,156u,156u,156u,156u,157u,157u,157u,158u,158u,158u,159u,159u,159u,159u,160u,160u,160u,161u,161u,161u,162u,162u,162u,162u,163u,163u,163u,164u,164u,164u,164u,165u,165u,165u,165u,166u,166u,166u,167u,167u,167u,167u,168u,168u,168u,168u,169u,169u,169u,169u,170u,170u,170u,170u,171u,171u,171u,171u,172u,172u,172u,172u,173u,173u,173u,173u,174u,174u,174u,174u,174u,175u,175u,175u,175u,176u,176u,176u,176u,176u,177u,177u,177u,177u,177u,178u,178u,178u,178u,178u,179u,179u,179u,179u,179u,180u,180u,180u,180u,180u,181u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,183u,182u,182u,182u,182u,182u,182u,181u,181u,181u,181u,181u,181u,180u,180u,180u,180u,180u,179u,179u,179u,179u,179u,178u,178u,178u,178u,178u,177u,177u,177u,177u,177u,176u,176u,176u,176u,176u,175u,175u,175u,175u,174u,174u,174u,174u,174u,173u,173u,173u,173u,172u,172u,172u,172u,171u,171u,171u,171u,170u,170u,170u,170u,169u,169u,169u,169u,168u,168u,168u,168u,167u,167u,167u,167u,166u,166u,166u,165u,165u,165u,165u,164u,164u,164u,164u,163u,163u,163u,162u,162u,162u,162u,161u,161u,161u,160u,160u,160u,159u,159u,159u,159u,158u,158u,158u,157u,157u,157u,156u,156u,156u,156u,155u,155u,155u,154u,154u,154u,153u,153u,153u,152u,152u,152u,152u,151u,151u,151u,150u,150u,150u,149u,149u,149u,148u,148u,148u,147u,147u,147u,146u,146u,146u,145u,145u,145u,144u,144u,144u,143u,143u,143u,142u,142u,142u,141u,141u,141u,140u,140u,140u,139u,139u,139u,138u,138u,138u,137u,137u,137u,136u,136u,136u,135u,135u,135u,134u,134u,134u,133u,133u,133u,132u,132u,132u,131u,131u,131u,130u,130u,130u,129u,129u,129u,128u,128u,128u,127u,127u,126u,126u,126u,125u,125u,125u,124u,124u,124u,123u,123u,123u,122u,122u,122u,121u,121u,121u,120u,120u,120u,119u,119u,119u,118u,118u,118u,117u,117u,117u,116u,116u,116u,115u,115u,115u,114u,114u,114u,113u,113u,113u,112u,112u,112u,111u,111u,111u,110u,110u,110u,109u,109u,109u,108u,108u,108u,107u,107u,107u,106u,106u,106u,105u,105u,105u,104u,104u,104u,103u,103u,103u,103u,102u,102u,102u,101u,101u,101u,100u,100u,100u,99u,99u,99u,99u,98u,98u,98u,97u,97u,97u,96u,96u,96u,96u,95u,95u,95u,94u,94u,94u,93u,93u,93u,93u,92u,92u,92u,91u,91u,91u,91u,90u,90u,90u,90u,89u,89u,89u,88u,88u,88u,88u,87u,87u,87u,87u,86u,86u,86u,86u,85u,85u,85u,85u,84u,84u,84u,84u,83u,83u,83u,83u,82u,82u,82u,82u,81u,81u,81u,81u,81u,80u,80u,80u,80u,79u,79u,79u,79u,79u,78u,78u,78u,78u,78u,77u,77u,77u,77u,77u,76u,76u,76u,76u,76u,75u,75u,75u,75u,75u,74u,74u,74u,74u,74u,74u,73u,73u,73u,73u,73u,73u,72u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,74u,75u,75u,75u,75u,75u,76u,76u,76u,76u,76u,77u,77u,77u,77u,77u,78u,78u,78u,78u,78u,79u,79u,79u,79u,79u,80u,80u,80u,80u,81u,81u,81u,81u,81u,82u,82u,82u,82u,83u,83u,83u,83u,84u,84u,84u,84u,85u,85u,85u,85u,86u,86u,86u,86u,87u,87u,87u,87u,88u,88u,88u,88u,89u,89u,89u,90u,90u,90u,90u,91u,91u,91u,91u,92u,92u,92u,93u,93u,93u,93u,94u,94u,94u,95u,95u,95u,96u,96u,96u,96u,97u,97u,97u,98u,98u,98u,99u,99u,99u,99u,100u,100u,100u,101u,101u,101u,102u,102u,102u,103u,103u,103u,103u,104u,104u,104u,105u,105u,105u,106u,106u,106u,107u,107u,107u,108u,108u,108u,109u,109u,109u,110u,110u,110u,111u,111u,111u,112u,112u,112u,113u,113u,113u,114u,114u,114u,115u,115u,115u,116u,116u,116u,117u,117u,117u,118u,118u,118u,119u,119u,119u,120u,120u,120u,121u,121u,121u,122u,122u,122u,123u,123u,123u,124u,124u,124u,125u,125u,125u,126u,126u,126u,127u,127u };
const uint8 CYCODE LF_DAC_1_wave2[LF_DAC_1_WAVE2_LENGTH] = { 128u,128u,128u,129u,129u,129u,130u,130u,131u,131u,131u,132u,132u,132u,133u,133u,134u,134u,134u,135u,135u,135u,136u,136u,137u,137u,137u,138u,138u,138u,139u,139u,140u,140u,140u,141u,141u,141u,142u,142u,142u,143u,143u,144u,144u,144u,145u,145u,145u,146u,146u,147u,147u,147u,148u,148u,148u,149u,149u,149u,150u,150u,150u,151u,151u,151u,152u,152u,153u,153u,153u,154u,154u,154u,155u,155u,155u,156u,156u,156u,157u,157u,157u,158u,158u,158u,159u,159u,159u,160u,160u,160u,161u,161u,161u,162u,162u,162u,162u,163u,163u,163u,164u,164u,164u,165u,165u,165u,166u,166u,166u,166u,167u,167u,167u,168u,168u,168u,168u,169u,169u,169u,170u,170u,170u,170u,171u,171u,171u,172u,172u,172u,172u,173u,173u,173u,173u,174u,174u,174u,174u,175u,175u,175u,175u,176u,176u,176u,176u,177u,177u,177u,177u,177u,178u,178u,178u,178u,179u,179u,179u,179u,179u,180u,180u,180u,180u,180u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,182u,182u,182u,182u,182u,182u,181u,181u,181u,181u,181u,180u,180u,180u,180u,180u,179u,179u,179u,179u,178u,178u,178u,178u,178u,177u,177u,177u,177u,176u,176u,176u,176u,175u,175u,175u,175u,175u,174u,174u,174u,173u,173u,173u,173u,172u,172u,172u,172u,171u,171u,171u,171u,170u,170u,170u,169u,169u,169u,169u,168u,168u,168u,167u,167u,167u,167u,166u,166u,166u,165u,165u,165u,164u,164u,164u,164u,163u,163u,163u,162u,162u,162u,161u,161u,161u,160u,160u,160u,159u,159u,159u,158u,158u,158u,157u,157u,157u,156u,156u,156u,155u,155u,155u,154u,154u,154u,153u,153u,153u,152u,152u,152u,151u,151u,151u,150u,150u,150u,149u,149u,148u,148u,148u,147u,147u,147u,146u,146u,146u,145u,145u,145u,144u,144u,143u,143u,143u,142u,142u,142u,141u,141u,140u,140u,140u,139u,139u,139u,138u,138u,137u,137u,137u,136u,136u,136u,135u,135u,134u,134u,134u,133u,133u,133u,132u,132u,131u,131u,131u,130u,130u,130u,129u,129u,128u,128u,128u,127u,127u,127u,126u,126u,125u,125u,125u,124u,124u,124u,123u,123u,122u,122u,122u,121u,121u,121u,120u,120u,119u,119u,119u,118u,118u,118u,117u,117u,116u,116u,116u,115u,115u,115u,114u,114u,113u,113u,113u,112u,112u,112u,111u,111u,110u,110u,110u,109u,109u,109u,108u,108u,108u,107u,107u,107u,106u,106u,105u,105u,105u,104u,104u,104u,103u,103u,103u,102u,102u,102u,101u,101u,101u,100u,100u,100u,99u,99u,99u,98u,98u,98u,97u,97u,97u,96u,96u,96u,95u,95u,95u,94u,94u,94u,93u,93u,93u,92u,92u,92u,91u,91u,91u,91u,90u,90u,90u,89u,89u,89u,88u,88u,88u,88u,87u,87u,87u,86u,86u,86u,86u,85u,85u,85u,84u,84u,84u,84u,83u,83u,83u,83u,82u,82u,82u,82u,81u,81u,81u,80u,80u,80u,80u,80u,79u,79u,79u,79u,78u,78u,78u,78u,77u,77u,77u,77u,77u,76u,76u,76u,76u,75u,75u,75u,75u,75u,74u,74u,74u,74u,74u,73u,73u,73u,73u,73u,73u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,75u,75u,75u,75u,75u,76u,76u,76u,76u,76u,77u,77u,77u,77u,78u,78u,78u,78u,78u,79u,79u,79u,79u,80u,80u,80u,80u,81u,81u,81u,81u,82u,82u,82u,82u,83u,83u,83u,83u,84u,84u,84u,85u,85u,85u,85u,86u,86u,86u,87u,87u,87u,87u,88u,88u,88u,89u,89u,89u,89u,90u,90u,90u,91u,91u,91u,92u,92u,92u,93u,93u,93u,93u,94u,94u,94u,95u,95u,95u,96u,96u,96u,97u,97u,97u,98u,98u,98u,99u,99u,99u,100u,100u,100u,101u,101u,101u,102u,102u,102u,103u,103u,104u,104u,104u,105u,105u,105u,106u,106u,106u,107u,107u,107u,108u,108u,108u,109u,109u,110u,110u,110u,111u,111u,111u,112u,112u,113u,113u,113u,114u,114u,114u,115u,115u,115u,116u,116u,117u,117u,117u,118u,118u,118u,119u,119u,120u,120u,120u,121u,121u,121u,122u,122u,123u,123u,123u,124u,124u,124u,125u,125u,126u,126u,126u,127u,127u };

static uint8  LF_DAC_1_Wave1Chan;
static uint8  LF_DAC_1_Wave2Chan;
static uint8  LF_DAC_1_Wave1TD;
static uint8  LF_DAC_1_Wave2TD;


/*******************************************************************************
* Function Name: LF_DAC_1_Init
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
void LF_DAC_1_Init(void) 
{
	LF_DAC_1_VDAC8_Init();
	LF_DAC_1_VDAC8_SetSpeed(LF_DAC_1_HIGHSPEED);
	LF_DAC_1_VDAC8_SetRange(LF_DAC_1_DAC_RANGE);

	#if(LF_DAC_1_DAC_MODE == LF_DAC_1_CURRENT_MODE)
		LF_DAC_1_IDAC8_SetPolarity(LF_DAC_1_DAC_POL);
	#endif /* LF_DAC_1_DAC_MODE == LF_DAC_1_CURRENT_MODE */

	#if(LF_DAC_1_OUT_MODE == LF_DAC_1_BUFFER_MODE)
	   LF_DAC_1_BuffAmp_Init();
	#endif /* LF_DAC_1_OUT_MODE == LF_DAC_1_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	LF_DAC_1_Wave1TD = CyDmaTdAllocate();
	LF_DAC_1_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	LF_DAC_1_Wave1Setup(LF_DAC_1_wave1, LF_DAC_1_WAVE1_LENGTH) ;
	LF_DAC_1_Wave2Setup(LF_DAC_1_wave2, LF_DAC_1_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(LF_DAC_1_DacClk_PHASE)
	   LF_DAC_1_DacClk_SetPhase(LF_DAC_1_CLK_PHASE_0nS);
	#endif /* defined(LF_DAC_1_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: LF_DAC_1_Enable
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
void LF_DAC_1_Enable(void) 
{
	LF_DAC_1_VDAC8_Enable();

	#if(LF_DAC_1_OUT_MODE == LF_DAC_1_BUFFER_MODE)
	   LF_DAC_1_BuffAmp_Enable();
	#endif /* LF_DAC_1_OUT_MODE == LF_DAC_1_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(LF_DAC_1_Wave1Chan, 1u);
	(void)CyDmaChEnable(LF_DAC_1_Wave2Chan, 1u);
	
	/* set the initial value */
	LF_DAC_1_SetValue(0u);
	
	#if(LF_DAC_1_CLOCK_SRC == LF_DAC_1_CLOCK_INT)  	
	   LF_DAC_1_DacClk_Start();
	#endif /* LF_DAC_1_CLOCK_SRC == LF_DAC_1_CLOCK_INT */
}


/*******************************************************************************
* Function Name: LF_DAC_1_Start
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
void LF_DAC_1_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(LF_DAC_1_initVar == 0u)
	{
		LF_DAC_1_Init();
		LF_DAC_1_initVar = 1u;
	}
	
	LF_DAC_1_Enable();
}


/*******************************************************************************
* Function Name: LF_DAC_1_StartEx
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
void LF_DAC_1_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	LF_DAC_1_Wave1Setup(wavePtr1, sampleSize1);
	LF_DAC_1_Wave2Setup(wavePtr2, sampleSize2);
	LF_DAC_1_Start();
}


/*******************************************************************************
* Function Name: LF_DAC_1_Stop
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
void LF_DAC_1_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(LF_DAC_1_CLOCK_SRC == LF_DAC_1_CLOCK_INT)  	
	   LF_DAC_1_DacClk_Stop();
	#endif /* LF_DAC_1_CLOCK_SRC == LF_DAC_1_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(LF_DAC_1_Wave1Chan);
	(void)CyDmaChDisable(LF_DAC_1_Wave2Chan);

	/* Disable power to DAC */
	LF_DAC_1_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: LF_DAC_1_Wave1Setup
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
void LF_DAC_1_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (LF_DAC_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		LF_DAC_1_Wave1Chan = LF_DAC_1_Wave1_DMA_DmaInitialize(
		LF_DAC_1_Wave1_DMA_BYTES_PER_BURST, LF_DAC_1_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		LF_DAC_1_Wave1Chan = LF_DAC_1_Wave1_DMA_DmaInitialize(
		LF_DAC_1_Wave1_DMA_BYTES_PER_BURST, LF_DAC_1_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(LF_DAC_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(LF_DAC_1_Wave1TD, sampleSize, LF_DAC_1_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)LF_DAC_1_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(LF_DAC_1_Wave1TD, LO16((uint32)wavePtr), LO16(LF_DAC_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(LF_DAC_1_Wave1Chan, LF_DAC_1_Wave1TD);
}


/*******************************************************************************
* Function Name: LF_DAC_1_Wave2Setup
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
void LF_DAC_1_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (LF_DAC_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		LF_DAC_1_Wave2Chan = LF_DAC_1_Wave2_DMA_DmaInitialize(
		LF_DAC_1_Wave2_DMA_BYTES_PER_BURST, LF_DAC_1_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		LF_DAC_1_Wave2Chan = LF_DAC_1_Wave2_DMA_DmaInitialize(
		LF_DAC_1_Wave2_DMA_BYTES_PER_BURST, LF_DAC_1_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(LF_DAC_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(LF_DAC_1_Wave2TD, sampleSize, LF_DAC_1_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)LF_DAC_1_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(LF_DAC_1_Wave2TD, LO16((uint32)wavePtr), LO16(LF_DAC_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(LF_DAC_1_Wave2Chan, LF_DAC_1_Wave2TD);
}


/* [] END OF FILE */
