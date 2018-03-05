/*******************************************************************************
* File Name: LowFrequencies_2_3.h  
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

#if !defined(CY_WaveDAC8_LowFrequencies_2_3_H) 
#define CY_WaveDAC8_LowFrequencies_2_3_H

#include "cytypes.h"
#include "cyfitter.h"
#include <LowFrequencies_2_3_Wave1_DMA_dma.h>
#include <LowFrequencies_2_3_Wave2_DMA_dma.h>
#include <LowFrequencies_2_3_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define LowFrequencies_2_3_WAVE1_TYPE     (0u)     /* Waveform for wave1 */
#define LowFrequencies_2_3_WAVE2_TYPE     (0u)     /* Waveform for wave2 */
#define LowFrequencies_2_3_SINE_WAVE      (0u)
#define LowFrequencies_2_3_SQUARE_WAVE    (1u)
#define LowFrequencies_2_3_TRIANGLE_WAVE  (2u)
#define LowFrequencies_2_3_SAWTOOTH_WAVE  (3u)
#define LowFrequencies_2_3_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define LowFrequencies_2_3_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define LowFrequencies_2_3_WAVE1_LENGTH   (937u)   /* Length for wave1 */
#define LowFrequencies_2_3_WAVE2_LENGTH   (849u)   /* Length for wave2 */
	
#define LowFrequencies_2_3_DEFAULT_RANGE    (0u) /* Default DAC range */
#define LowFrequencies_2_3_DAC_RANGE_1V     (0u)
#define LowFrequencies_2_3_DAC_RANGE_1V_BUF (16u)
#define LowFrequencies_2_3_DAC_RANGE_4V     (1u)
#define LowFrequencies_2_3_DAC_RANGE_4V_BUF (17u)
#define LowFrequencies_2_3_VOLT_MODE        (0u)
#define LowFrequencies_2_3_CURRENT_MODE     (1u)
#define LowFrequencies_2_3_DAC_MODE         (((LowFrequencies_2_3_DEFAULT_RANGE == LowFrequencies_2_3_DAC_RANGE_1V) || \
									  (LowFrequencies_2_3_DEFAULT_RANGE == LowFrequencies_2_3_DAC_RANGE_4V) || \
							  		  (LowFrequencies_2_3_DEFAULT_RANGE == LowFrequencies_2_3_DAC_RANGE_1V_BUF) || \
									  (LowFrequencies_2_3_DEFAULT_RANGE == LowFrequencies_2_3_DAC_RANGE_4V_BUF)) ? \
									   LowFrequencies_2_3_VOLT_MODE : LowFrequencies_2_3_CURRENT_MODE)

#define LowFrequencies_2_3_DACMODE LowFrequencies_2_3_DAC_MODE /* legacy definition for backward compatibility */

#define LowFrequencies_2_3_DIRECT_MODE (0u)
#define LowFrequencies_2_3_BUFFER_MODE (1u)
#define LowFrequencies_2_3_OUT_MODE    (((LowFrequencies_2_3_DEFAULT_RANGE == LowFrequencies_2_3_DAC_RANGE_1V_BUF) || \
								 (LowFrequencies_2_3_DEFAULT_RANGE == LowFrequencies_2_3_DAC_RANGE_4V_BUF)) ? \
								  LowFrequencies_2_3_BUFFER_MODE : LowFrequencies_2_3_DIRECT_MODE)

#if(LowFrequencies_2_3_OUT_MODE == LowFrequencies_2_3_BUFFER_MODE)
    #include <LowFrequencies_2_3_BuffAmp.h>
#endif /* LowFrequencies_2_3_OUT_MODE == LowFrequencies_2_3_BUFFER_MODE */

#define LowFrequencies_2_3_CLOCK_INT      (1u)
#define LowFrequencies_2_3_CLOCK_EXT      (0u)
#define LowFrequencies_2_3_CLOCK_SRC      (1u)

#if(LowFrequencies_2_3_CLOCK_SRC == LowFrequencies_2_3_CLOCK_INT)  
	#include <LowFrequencies_2_3_DacClk.h>
	#if defined(LowFrequencies_2_3_DacClk_PHASE)
		#define LowFrequencies_2_3_CLK_PHASE_0nS (1u)
	#endif /* defined(LowFrequencies_2_3_DacClk_PHASE) */
#endif /* LowFrequencies_2_3_CLOCK_SRC == LowFrequencies_2_3_CLOCK_INT */

#if (CY_PSOC3)
	#define LowFrequencies_2_3_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define LowFrequencies_2_3_Wave1_DMA_BYTES_PER_BURST      (1u)
#define LowFrequencies_2_3_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define LowFrequencies_2_3_Wave2_DMA_BYTES_PER_BURST      (1u)
#define LowFrequencies_2_3_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}LowFrequencies_2_3_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void LowFrequencies_2_3_Start(void)             ;
void LowFrequencies_2_3_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void LowFrequencies_2_3_Init(void)              ;
void LowFrequencies_2_3_Enable(void)            ;
void LowFrequencies_2_3_Stop(void)              ;

void LowFrequencies_2_3_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void LowFrequencies_2_3_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void LowFrequencies_2_3_Sleep(void)             ;
void LowFrequencies_2_3_Wakeup(void)            ;

#define LowFrequencies_2_3_SetSpeed       LowFrequencies_2_3_VDAC8_SetSpeed
#define LowFrequencies_2_3_SetRange       LowFrequencies_2_3_VDAC8_SetRange
#define LowFrequencies_2_3_SetValue       LowFrequencies_2_3_VDAC8_SetValue
#define LowFrequencies_2_3_DacTrim        LowFrequencies_2_3_VDAC8_DacTrim
#define LowFrequencies_2_3_SaveConfig     LowFrequencies_2_3_VDAC8_SaveConfig
#define LowFrequencies_2_3_RestoreConfig  LowFrequencies_2_3_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 LowFrequencies_2_3_initVar;

extern const uint8 CYCODE LowFrequencies_2_3_wave1[LowFrequencies_2_3_WAVE1_LENGTH];
extern const uint8 CYCODE LowFrequencies_2_3_wave2[LowFrequencies_2_3_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(LowFrequencies_2_3_DAC_MODE == LowFrequencies_2_3_VOLT_MODE)
    #define LowFrequencies_2_3_RANGE_1V       (0x00u)
    #define LowFrequencies_2_3_RANGE_4V       (0x04u)
#else /* current mode */
    #define LowFrequencies_2_3_RANGE_32uA     (0x00u)
    #define LowFrequencies_2_3_RANGE_255uA    (0x04u)
    #define LowFrequencies_2_3_RANGE_2mA      (0x08u)
    #define LowFrequencies_2_3_RANGE_2048uA   LowFrequencies_2_3_RANGE_2mA
#endif /* LowFrequencies_2_3_DAC_MODE == LowFrequencies_2_3_VOLT_MODE */

/* Power setting for SetSpeed API */
#define LowFrequencies_2_3_LOWSPEED       (0x00u)
#define LowFrequencies_2_3_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define LowFrequencies_2_3_DAC8__D LowFrequencies_2_3_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define LowFrequencies_2_3_HS_MASK        (0x02u)
#define LowFrequencies_2_3_HS_LOWPOWER    (0x00u)
#define LowFrequencies_2_3_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define LowFrequencies_2_3_MODE_MASK      (0x10u)
#define LowFrequencies_2_3_MODE_V         (0x00u)
#define LowFrequencies_2_3_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define LowFrequencies_2_3_RANGE_MASK     (0x0Cu)
#define LowFrequencies_2_3_RANGE_0        (0x00u)
#define LowFrequencies_2_3_RANGE_1        (0x04u)
#define LowFrequencies_2_3_RANGE_2        (0x08u)
#define LowFrequencies_2_3_RANGE_3        (0x0Cu)
#define LowFrequencies_2_3_IDIR_MASK      (0x04u)

#define LowFrequencies_2_3_DAC_RANGE      ((uint8)(0u << 2u) & LowFrequencies_2_3_RANGE_MASK)
#define LowFrequencies_2_3_DAC_POL        ((uint8)(0u >> 1u) & LowFrequencies_2_3_IDIR_MASK)


#endif /* CY_WaveDAC8_LowFrequencies_2_3_H  */

/* [] END OF FILE */
