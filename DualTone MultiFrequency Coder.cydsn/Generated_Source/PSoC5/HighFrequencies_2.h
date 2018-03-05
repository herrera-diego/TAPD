/*******************************************************************************
* File Name: HighFrequencies_2.h  
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

#if !defined(CY_WaveDAC8_HighFrequencies_2_H) 
#define CY_WaveDAC8_HighFrequencies_2_H

#include "cytypes.h"
#include "cyfitter.h"
#include <HighFrequencies_2_Wave1_DMA_dma.h>
#include <HighFrequencies_2_Wave2_DMA_dma.h>
#include <HighFrequencies_2_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define HighFrequencies_2_WAVE1_TYPE     (0u)     /* Waveform for wave1 */
#define HighFrequencies_2_WAVE2_TYPE     (11u)     /* Waveform for wave2 */
#define HighFrequencies_2_SINE_WAVE      (0u)
#define HighFrequencies_2_SQUARE_WAVE    (1u)
#define HighFrequencies_2_TRIANGLE_WAVE  (2u)
#define HighFrequencies_2_SAWTOOTH_WAVE  (3u)
#define HighFrequencies_2_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define HighFrequencies_2_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define HighFrequencies_2_WAVE1_LENGTH   (541u)   /* Length for wave1 */
#define HighFrequencies_2_WAVE2_LENGTH   (4u)   /* Length for wave2 */
	
#define HighFrequencies_2_DEFAULT_RANGE    (0u) /* Default DAC range */
#define HighFrequencies_2_DAC_RANGE_1V     (0u)
#define HighFrequencies_2_DAC_RANGE_1V_BUF (16u)
#define HighFrequencies_2_DAC_RANGE_4V     (1u)
#define HighFrequencies_2_DAC_RANGE_4V_BUF (17u)
#define HighFrequencies_2_VOLT_MODE        (0u)
#define HighFrequencies_2_CURRENT_MODE     (1u)
#define HighFrequencies_2_DAC_MODE         (((HighFrequencies_2_DEFAULT_RANGE == HighFrequencies_2_DAC_RANGE_1V) || \
									  (HighFrequencies_2_DEFAULT_RANGE == HighFrequencies_2_DAC_RANGE_4V) || \
							  		  (HighFrequencies_2_DEFAULT_RANGE == HighFrequencies_2_DAC_RANGE_1V_BUF) || \
									  (HighFrequencies_2_DEFAULT_RANGE == HighFrequencies_2_DAC_RANGE_4V_BUF)) ? \
									   HighFrequencies_2_VOLT_MODE : HighFrequencies_2_CURRENT_MODE)

#define HighFrequencies_2_DACMODE HighFrequencies_2_DAC_MODE /* legacy definition for backward compatibility */

#define HighFrequencies_2_DIRECT_MODE (0u)
#define HighFrequencies_2_BUFFER_MODE (1u)
#define HighFrequencies_2_OUT_MODE    (((HighFrequencies_2_DEFAULT_RANGE == HighFrequencies_2_DAC_RANGE_1V_BUF) || \
								 (HighFrequencies_2_DEFAULT_RANGE == HighFrequencies_2_DAC_RANGE_4V_BUF)) ? \
								  HighFrequencies_2_BUFFER_MODE : HighFrequencies_2_DIRECT_MODE)

#if(HighFrequencies_2_OUT_MODE == HighFrequencies_2_BUFFER_MODE)
    #include <HighFrequencies_2_BuffAmp.h>
#endif /* HighFrequencies_2_OUT_MODE == HighFrequencies_2_BUFFER_MODE */

#define HighFrequencies_2_CLOCK_INT      (1u)
#define HighFrequencies_2_CLOCK_EXT      (0u)
#define HighFrequencies_2_CLOCK_SRC      (1u)

#if(HighFrequencies_2_CLOCK_SRC == HighFrequencies_2_CLOCK_INT)  
	#include <HighFrequencies_2_DacClk.h>
	#if defined(HighFrequencies_2_DacClk_PHASE)
		#define HighFrequencies_2_CLK_PHASE_0nS (1u)
	#endif /* defined(HighFrequencies_2_DacClk_PHASE) */
#endif /* HighFrequencies_2_CLOCK_SRC == HighFrequencies_2_CLOCK_INT */

#if (CY_PSOC3)
	#define HighFrequencies_2_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define HighFrequencies_2_Wave1_DMA_BYTES_PER_BURST      (1u)
#define HighFrequencies_2_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define HighFrequencies_2_Wave2_DMA_BYTES_PER_BURST      (1u)
#define HighFrequencies_2_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}HighFrequencies_2_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void HighFrequencies_2_Start(void)             ;
void HighFrequencies_2_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void HighFrequencies_2_Init(void)              ;
void HighFrequencies_2_Enable(void)            ;
void HighFrequencies_2_Stop(void)              ;

void HighFrequencies_2_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void HighFrequencies_2_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void HighFrequencies_2_Sleep(void)             ;
void HighFrequencies_2_Wakeup(void)            ;

#define HighFrequencies_2_SetSpeed       HighFrequencies_2_VDAC8_SetSpeed
#define HighFrequencies_2_SetRange       HighFrequencies_2_VDAC8_SetRange
#define HighFrequencies_2_SetValue       HighFrequencies_2_VDAC8_SetValue
#define HighFrequencies_2_DacTrim        HighFrequencies_2_VDAC8_DacTrim
#define HighFrequencies_2_SaveConfig     HighFrequencies_2_VDAC8_SaveConfig
#define HighFrequencies_2_RestoreConfig  HighFrequencies_2_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 HighFrequencies_2_initVar;

extern const uint8 CYCODE HighFrequencies_2_wave1[HighFrequencies_2_WAVE1_LENGTH];
extern const uint8 CYCODE HighFrequencies_2_wave2[HighFrequencies_2_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(HighFrequencies_2_DAC_MODE == HighFrequencies_2_VOLT_MODE)
    #define HighFrequencies_2_RANGE_1V       (0x00u)
    #define HighFrequencies_2_RANGE_4V       (0x04u)
#else /* current mode */
    #define HighFrequencies_2_RANGE_32uA     (0x00u)
    #define HighFrequencies_2_RANGE_255uA    (0x04u)
    #define HighFrequencies_2_RANGE_2mA      (0x08u)
    #define HighFrequencies_2_RANGE_2048uA   HighFrequencies_2_RANGE_2mA
#endif /* HighFrequencies_2_DAC_MODE == HighFrequencies_2_VOLT_MODE */

/* Power setting for SetSpeed API */
#define HighFrequencies_2_LOWSPEED       (0x00u)
#define HighFrequencies_2_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define HighFrequencies_2_DAC8__D HighFrequencies_2_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define HighFrequencies_2_HS_MASK        (0x02u)
#define HighFrequencies_2_HS_LOWPOWER    (0x00u)
#define HighFrequencies_2_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define HighFrequencies_2_MODE_MASK      (0x10u)
#define HighFrequencies_2_MODE_V         (0x00u)
#define HighFrequencies_2_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define HighFrequencies_2_RANGE_MASK     (0x0Cu)
#define HighFrequencies_2_RANGE_0        (0x00u)
#define HighFrequencies_2_RANGE_1        (0x04u)
#define HighFrequencies_2_RANGE_2        (0x08u)
#define HighFrequencies_2_RANGE_3        (0x0Cu)
#define HighFrequencies_2_IDIR_MASK      (0x04u)

#define HighFrequencies_2_DAC_RANGE      ((uint8)(0u << 2u) & HighFrequencies_2_RANGE_MASK)
#define HighFrequencies_2_DAC_POL        ((uint8)(0u >> 1u) & HighFrequencies_2_IDIR_MASK)


#endif /* CY_WaveDAC8_HighFrequencies_2_H  */

/* [] END OF FILE */
