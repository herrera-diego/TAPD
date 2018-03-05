/*******************************************************************************
* File Name: HF_DAC_1.h  
* Version 2.10
*
* Description:
*  This file contains the function prototypes and constants used in
*  the 8-bit Waveform DAC (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_WaveDAC8_HF_DAC_1_H) 
#define CY_WaveDAC8_HF_DAC_1_H

#include "cytypes.h"
#include "cyfitter.h"
#include <HF_DAC_1_Wave1_DMA_dma.h>
#include <HF_DAC_1_Wave2_DMA_dma.h>
#include <HF_DAC_1_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define HF_DAC_1_WAVE1_TYPE     (0u)     /* Waveform for wave1 */
#define HF_DAC_1_WAVE2_TYPE     (0u)     /* Waveform for wave2 */
#define HF_DAC_1_SINE_WAVE      (0u)
#define HF_DAC_1_SQUARE_WAVE    (1u)
#define HF_DAC_1_TRIANGLE_WAVE  (2u)
#define HF_DAC_1_SAWTOOTH_WAVE  (3u)
#define HF_DAC_1_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define HF_DAC_1_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define HF_DAC_1_WAVE1_LENGTH   (661u)   /* Length for wave1 */
#define HF_DAC_1_WAVE2_LENGTH   (598u)   /* Length for wave2 */
	
#define HF_DAC_1_DEFAULT_RANGE    (0u) /* Default DAC range */
#define HF_DAC_1_DAC_RANGE_1V     (0u)
#define HF_DAC_1_DAC_RANGE_1V_BUF (16u)
#define HF_DAC_1_DAC_RANGE_4V     (1u)
#define HF_DAC_1_DAC_RANGE_4V_BUF (17u)
#define HF_DAC_1_VOLT_MODE        (0u)
#define HF_DAC_1_CURRENT_MODE     (1u)
#define HF_DAC_1_DAC_MODE         (((HF_DAC_1_DEFAULT_RANGE == HF_DAC_1_DAC_RANGE_1V) || \
									  (HF_DAC_1_DEFAULT_RANGE == HF_DAC_1_DAC_RANGE_4V) || \
							  		  (HF_DAC_1_DEFAULT_RANGE == HF_DAC_1_DAC_RANGE_1V_BUF) || \
									  (HF_DAC_1_DEFAULT_RANGE == HF_DAC_1_DAC_RANGE_4V_BUF)) ? \
									   HF_DAC_1_VOLT_MODE : HF_DAC_1_CURRENT_MODE)

#define HF_DAC_1_DACMODE HF_DAC_1_DAC_MODE /* legacy definition for backward compatibility */

#define HF_DAC_1_DIRECT_MODE (0u)
#define HF_DAC_1_BUFFER_MODE (1u)
#define HF_DAC_1_OUT_MODE    (((HF_DAC_1_DEFAULT_RANGE == HF_DAC_1_DAC_RANGE_1V_BUF) || \
								 (HF_DAC_1_DEFAULT_RANGE == HF_DAC_1_DAC_RANGE_4V_BUF)) ? \
								  HF_DAC_1_BUFFER_MODE : HF_DAC_1_DIRECT_MODE)

#if(HF_DAC_1_OUT_MODE == HF_DAC_1_BUFFER_MODE)
    #include <HF_DAC_1_BuffAmp.h>
#endif /* HF_DAC_1_OUT_MODE == HF_DAC_1_BUFFER_MODE */

#define HF_DAC_1_CLOCK_INT      (1u)
#define HF_DAC_1_CLOCK_EXT      (0u)
#define HF_DAC_1_CLOCK_SRC      (1u)

#if(HF_DAC_1_CLOCK_SRC == HF_DAC_1_CLOCK_INT)  
	#include <HF_DAC_1_DacClk.h>
	#if defined(HF_DAC_1_DacClk_PHASE)
		#define HF_DAC_1_CLK_PHASE_0nS (1u)
	#endif /* defined(HF_DAC_1_DacClk_PHASE) */
#endif /* HF_DAC_1_CLOCK_SRC == HF_DAC_1_CLOCK_INT */

#if (CY_PSOC3)
	#define HF_DAC_1_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define HF_DAC_1_Wave1_DMA_BYTES_PER_BURST      (1u)
#define HF_DAC_1_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define HF_DAC_1_Wave2_DMA_BYTES_PER_BURST      (1u)
#define HF_DAC_1_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}HF_DAC_1_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void HF_DAC_1_Start(void)             ;
void HF_DAC_1_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void HF_DAC_1_Init(void)              ;
void HF_DAC_1_Enable(void)            ;
void HF_DAC_1_Stop(void)              ;

void HF_DAC_1_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void HF_DAC_1_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void HF_DAC_1_Sleep(void)             ;
void HF_DAC_1_Wakeup(void)            ;

#define HF_DAC_1_SetSpeed       HF_DAC_1_VDAC8_SetSpeed
#define HF_DAC_1_SetRange       HF_DAC_1_VDAC8_SetRange
#define HF_DAC_1_SetValue       HF_DAC_1_VDAC8_SetValue
#define HF_DAC_1_DacTrim        HF_DAC_1_VDAC8_DacTrim
#define HF_DAC_1_SaveConfig     HF_DAC_1_VDAC8_SaveConfig
#define HF_DAC_1_RestoreConfig  HF_DAC_1_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 HF_DAC_1_initVar;

extern const uint8 CYCODE HF_DAC_1_wave1[HF_DAC_1_WAVE1_LENGTH];
extern const uint8 CYCODE HF_DAC_1_wave2[HF_DAC_1_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(HF_DAC_1_DAC_MODE == HF_DAC_1_VOLT_MODE)
    #define HF_DAC_1_RANGE_1V       (0x00u)
    #define HF_DAC_1_RANGE_4V       (0x04u)
#else /* current mode */
    #define HF_DAC_1_RANGE_32uA     (0x00u)
    #define HF_DAC_1_RANGE_255uA    (0x04u)
    #define HF_DAC_1_RANGE_2mA      (0x08u)
    #define HF_DAC_1_RANGE_2048uA   HF_DAC_1_RANGE_2mA
#endif /* HF_DAC_1_DAC_MODE == HF_DAC_1_VOLT_MODE */

/* Power setting for SetSpeed API */
#define HF_DAC_1_LOWSPEED       (0x00u)
#define HF_DAC_1_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define HF_DAC_1_DAC8__D HF_DAC_1_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define HF_DAC_1_HS_MASK        (0x02u)
#define HF_DAC_1_HS_LOWPOWER    (0x00u)
#define HF_DAC_1_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define HF_DAC_1_MODE_MASK      (0x10u)
#define HF_DAC_1_MODE_V         (0x00u)
#define HF_DAC_1_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define HF_DAC_1_RANGE_MASK     (0x0Cu)
#define HF_DAC_1_RANGE_0        (0x00u)
#define HF_DAC_1_RANGE_1        (0x04u)
#define HF_DAC_1_RANGE_2        (0x08u)
#define HF_DAC_1_RANGE_3        (0x0Cu)
#define HF_DAC_1_IDIR_MASK      (0x04u)

#define HF_DAC_1_DAC_RANGE      ((uint8)(0u << 2u) & HF_DAC_1_RANGE_MASK)
#define HF_DAC_1_DAC_POL        ((uint8)(0u >> 1u) & HF_DAC_1_IDIR_MASK)


#endif /* CY_WaveDAC8_HF_DAC_1_H  */

/* [] END OF FILE */
