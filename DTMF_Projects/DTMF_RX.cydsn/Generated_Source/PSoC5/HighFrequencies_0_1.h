/*******************************************************************************
* File Name: HighFrequencies_0_1.h  
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

#if !defined(CY_WaveDAC8_HighFrequencies_0_1_H) 
#define CY_WaveDAC8_HighFrequencies_0_1_H

#include "cytypes.h"
#include "cyfitter.h"
#include <HighFrequencies_0_1_Wave1_DMA_dma.h>
#include <HighFrequencies_0_1_Wave2_DMA_dma.h>
#include <HighFrequencies_0_1_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define HighFrequencies_0_1_WAVE1_TYPE     (0u)     /* Waveform for wave1 */
#define HighFrequencies_0_1_WAVE2_TYPE     (0u)     /* Waveform for wave2 */
#define HighFrequencies_0_1_SINE_WAVE      (0u)
#define HighFrequencies_0_1_SQUARE_WAVE    (1u)
#define HighFrequencies_0_1_TRIANGLE_WAVE  (2u)
#define HighFrequencies_0_1_SAWTOOTH_WAVE  (3u)
#define HighFrequencies_0_1_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define HighFrequencies_0_1_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define HighFrequencies_0_1_WAVE1_LENGTH   (661u)   /* Length for wave1 */
#define HighFrequencies_0_1_WAVE2_LENGTH   (598u)   /* Length for wave2 */
	
#define HighFrequencies_0_1_DEFAULT_RANGE    (0u) /* Default DAC range */
#define HighFrequencies_0_1_DAC_RANGE_1V     (0u)
#define HighFrequencies_0_1_DAC_RANGE_1V_BUF (16u)
#define HighFrequencies_0_1_DAC_RANGE_4V     (1u)
#define HighFrequencies_0_1_DAC_RANGE_4V_BUF (17u)
#define HighFrequencies_0_1_VOLT_MODE        (0u)
#define HighFrequencies_0_1_CURRENT_MODE     (1u)
#define HighFrequencies_0_1_DAC_MODE         (((HighFrequencies_0_1_DEFAULT_RANGE == HighFrequencies_0_1_DAC_RANGE_1V) || \
									  (HighFrequencies_0_1_DEFAULT_RANGE == HighFrequencies_0_1_DAC_RANGE_4V) || \
							  		  (HighFrequencies_0_1_DEFAULT_RANGE == HighFrequencies_0_1_DAC_RANGE_1V_BUF) || \
									  (HighFrequencies_0_1_DEFAULT_RANGE == HighFrequencies_0_1_DAC_RANGE_4V_BUF)) ? \
									   HighFrequencies_0_1_VOLT_MODE : HighFrequencies_0_1_CURRENT_MODE)

#define HighFrequencies_0_1_DACMODE HighFrequencies_0_1_DAC_MODE /* legacy definition for backward compatibility */

#define HighFrequencies_0_1_DIRECT_MODE (0u)
#define HighFrequencies_0_1_BUFFER_MODE (1u)
#define HighFrequencies_0_1_OUT_MODE    (((HighFrequencies_0_1_DEFAULT_RANGE == HighFrequencies_0_1_DAC_RANGE_1V_BUF) || \
								 (HighFrequencies_0_1_DEFAULT_RANGE == HighFrequencies_0_1_DAC_RANGE_4V_BUF)) ? \
								  HighFrequencies_0_1_BUFFER_MODE : HighFrequencies_0_1_DIRECT_MODE)

#if(HighFrequencies_0_1_OUT_MODE == HighFrequencies_0_1_BUFFER_MODE)
    #include <HighFrequencies_0_1_BuffAmp.h>
#endif /* HighFrequencies_0_1_OUT_MODE == HighFrequencies_0_1_BUFFER_MODE */

#define HighFrequencies_0_1_CLOCK_INT      (1u)
#define HighFrequencies_0_1_CLOCK_EXT      (0u)
#define HighFrequencies_0_1_CLOCK_SRC      (1u)

#if(HighFrequencies_0_1_CLOCK_SRC == HighFrequencies_0_1_CLOCK_INT)  
	#include <HighFrequencies_0_1_DacClk.h>
	#if defined(HighFrequencies_0_1_DacClk_PHASE)
		#define HighFrequencies_0_1_CLK_PHASE_0nS (1u)
	#endif /* defined(HighFrequencies_0_1_DacClk_PHASE) */
#endif /* HighFrequencies_0_1_CLOCK_SRC == HighFrequencies_0_1_CLOCK_INT */

#if (CY_PSOC3)
	#define HighFrequencies_0_1_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define HighFrequencies_0_1_Wave1_DMA_BYTES_PER_BURST      (1u)
#define HighFrequencies_0_1_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define HighFrequencies_0_1_Wave2_DMA_BYTES_PER_BURST      (1u)
#define HighFrequencies_0_1_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}HighFrequencies_0_1_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void HighFrequencies_0_1_Start(void)             ;
void HighFrequencies_0_1_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void HighFrequencies_0_1_Init(void)              ;
void HighFrequencies_0_1_Enable(void)            ;
void HighFrequencies_0_1_Stop(void)              ;

void HighFrequencies_0_1_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void HighFrequencies_0_1_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void HighFrequencies_0_1_Sleep(void)             ;
void HighFrequencies_0_1_Wakeup(void)            ;

#define HighFrequencies_0_1_SetSpeed       HighFrequencies_0_1_VDAC8_SetSpeed
#define HighFrequencies_0_1_SetRange       HighFrequencies_0_1_VDAC8_SetRange
#define HighFrequencies_0_1_SetValue       HighFrequencies_0_1_VDAC8_SetValue
#define HighFrequencies_0_1_DacTrim        HighFrequencies_0_1_VDAC8_DacTrim
#define HighFrequencies_0_1_SaveConfig     HighFrequencies_0_1_VDAC8_SaveConfig
#define HighFrequencies_0_1_RestoreConfig  HighFrequencies_0_1_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 HighFrequencies_0_1_initVar;

extern const uint8 CYCODE HighFrequencies_0_1_wave1[HighFrequencies_0_1_WAVE1_LENGTH];
extern const uint8 CYCODE HighFrequencies_0_1_wave2[HighFrequencies_0_1_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(HighFrequencies_0_1_DAC_MODE == HighFrequencies_0_1_VOLT_MODE)
    #define HighFrequencies_0_1_RANGE_1V       (0x00u)
    #define HighFrequencies_0_1_RANGE_4V       (0x04u)
#else /* current mode */
    #define HighFrequencies_0_1_RANGE_32uA     (0x00u)
    #define HighFrequencies_0_1_RANGE_255uA    (0x04u)
    #define HighFrequencies_0_1_RANGE_2mA      (0x08u)
    #define HighFrequencies_0_1_RANGE_2048uA   HighFrequencies_0_1_RANGE_2mA
#endif /* HighFrequencies_0_1_DAC_MODE == HighFrequencies_0_1_VOLT_MODE */

/* Power setting for SetSpeed API */
#define HighFrequencies_0_1_LOWSPEED       (0x00u)
#define HighFrequencies_0_1_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define HighFrequencies_0_1_DAC8__D HighFrequencies_0_1_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define HighFrequencies_0_1_HS_MASK        (0x02u)
#define HighFrequencies_0_1_HS_LOWPOWER    (0x00u)
#define HighFrequencies_0_1_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define HighFrequencies_0_1_MODE_MASK      (0x10u)
#define HighFrequencies_0_1_MODE_V         (0x00u)
#define HighFrequencies_0_1_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define HighFrequencies_0_1_RANGE_MASK     (0x0Cu)
#define HighFrequencies_0_1_RANGE_0        (0x00u)
#define HighFrequencies_0_1_RANGE_1        (0x04u)
#define HighFrequencies_0_1_RANGE_2        (0x08u)
#define HighFrequencies_0_1_RANGE_3        (0x0Cu)
#define HighFrequencies_0_1_IDIR_MASK      (0x04u)

#define HighFrequencies_0_1_DAC_RANGE      ((uint8)(0u << 2u) & HighFrequencies_0_1_RANGE_MASK)
#define HighFrequencies_0_1_DAC_POL        ((uint8)(0u >> 1u) & HighFrequencies_0_1_IDIR_MASK)


#endif /* CY_WaveDAC8_HighFrequencies_0_1_H  */

/* [] END OF FILE */
