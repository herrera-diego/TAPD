/*******************************************************************************
* File Name: HighFrequencies_0_1_DacClk.h
* Version 2.10
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_HighFrequencies_0_1_DacClk_H)
#define CY_CLOCK_HighFrequencies_0_1_DacClk_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void HighFrequencies_0_1_DacClk_Start(void) ;
void HighFrequencies_0_1_DacClk_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void HighFrequencies_0_1_DacClk_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void HighFrequencies_0_1_DacClk_StandbyPower(uint8 state) ;
void HighFrequencies_0_1_DacClk_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 HighFrequencies_0_1_DacClk_GetDividerRegister(void) ;
void HighFrequencies_0_1_DacClk_SetModeRegister(uint8 modeBitMask) ;
void HighFrequencies_0_1_DacClk_ClearModeRegister(uint8 modeBitMask) ;
uint8 HighFrequencies_0_1_DacClk_GetModeRegister(void) ;
void HighFrequencies_0_1_DacClk_SetSourceRegister(uint8 clkSource) ;
uint8 HighFrequencies_0_1_DacClk_GetSourceRegister(void) ;
#if defined(HighFrequencies_0_1_DacClk__CFG3)
void HighFrequencies_0_1_DacClk_SetPhaseRegister(uint8 clkPhase) ;
uint8 HighFrequencies_0_1_DacClk_GetPhaseRegister(void) ;
#endif /* defined(HighFrequencies_0_1_DacClk__CFG3) */

#define HighFrequencies_0_1_DacClk_Enable()                       HighFrequencies_0_1_DacClk_Start()
#define HighFrequencies_0_1_DacClk_Disable()                      HighFrequencies_0_1_DacClk_Stop()
#define HighFrequencies_0_1_DacClk_SetDivider(clkDivider)         HighFrequencies_0_1_DacClk_SetDividerRegister(clkDivider, 1u)
#define HighFrequencies_0_1_DacClk_SetDividerValue(clkDivider)    HighFrequencies_0_1_DacClk_SetDividerRegister((clkDivider) - 1u, 1u)
#define HighFrequencies_0_1_DacClk_SetMode(clkMode)               HighFrequencies_0_1_DacClk_SetModeRegister(clkMode)
#define HighFrequencies_0_1_DacClk_SetSource(clkSource)           HighFrequencies_0_1_DacClk_SetSourceRegister(clkSource)
#if defined(HighFrequencies_0_1_DacClk__CFG3)
#define HighFrequencies_0_1_DacClk_SetPhase(clkPhase)             HighFrequencies_0_1_DacClk_SetPhaseRegister(clkPhase)
#define HighFrequencies_0_1_DacClk_SetPhaseValue(clkPhase)        HighFrequencies_0_1_DacClk_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(HighFrequencies_0_1_DacClk__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define HighFrequencies_0_1_DacClk_CLKEN              (* (reg8 *) HighFrequencies_0_1_DacClk__PM_ACT_CFG)
#define HighFrequencies_0_1_DacClk_CLKEN_PTR          ((reg8 *) HighFrequencies_0_1_DacClk__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define HighFrequencies_0_1_DacClk_CLKSTBY            (* (reg8 *) HighFrequencies_0_1_DacClk__PM_STBY_CFG)
#define HighFrequencies_0_1_DacClk_CLKSTBY_PTR        ((reg8 *) HighFrequencies_0_1_DacClk__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define HighFrequencies_0_1_DacClk_DIV_LSB            (* (reg8 *) HighFrequencies_0_1_DacClk__CFG0)
#define HighFrequencies_0_1_DacClk_DIV_LSB_PTR        ((reg8 *) HighFrequencies_0_1_DacClk__CFG0)
#define HighFrequencies_0_1_DacClk_DIV_PTR            ((reg16 *) HighFrequencies_0_1_DacClk__CFG0)

/* Clock MSB divider configuration register. */
#define HighFrequencies_0_1_DacClk_DIV_MSB            (* (reg8 *) HighFrequencies_0_1_DacClk__CFG1)
#define HighFrequencies_0_1_DacClk_DIV_MSB_PTR        ((reg8 *) HighFrequencies_0_1_DacClk__CFG1)

/* Mode and source configuration register */
#define HighFrequencies_0_1_DacClk_MOD_SRC            (* (reg8 *) HighFrequencies_0_1_DacClk__CFG2)
#define HighFrequencies_0_1_DacClk_MOD_SRC_PTR        ((reg8 *) HighFrequencies_0_1_DacClk__CFG2)

#if defined(HighFrequencies_0_1_DacClk__CFG3)
/* Analog clock phase configuration register */
#define HighFrequencies_0_1_DacClk_PHASE              (* (reg8 *) HighFrequencies_0_1_DacClk__CFG3)
#define HighFrequencies_0_1_DacClk_PHASE_PTR          ((reg8 *) HighFrequencies_0_1_DacClk__CFG3)
#endif /* defined(HighFrequencies_0_1_DacClk__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define HighFrequencies_0_1_DacClk_CLKEN_MASK         HighFrequencies_0_1_DacClk__PM_ACT_MSK
#define HighFrequencies_0_1_DacClk_CLKSTBY_MASK       HighFrequencies_0_1_DacClk__PM_STBY_MSK

/* CFG2 field masks */
#define HighFrequencies_0_1_DacClk_SRC_SEL_MSK        HighFrequencies_0_1_DacClk__CFG2_SRC_SEL_MASK
#define HighFrequencies_0_1_DacClk_MODE_MASK          (~(HighFrequencies_0_1_DacClk_SRC_SEL_MSK))

#if defined(HighFrequencies_0_1_DacClk__CFG3)
/* CFG3 phase mask */
#define HighFrequencies_0_1_DacClk_PHASE_MASK         HighFrequencies_0_1_DacClk__CFG3_PHASE_DLY_MASK
#endif /* defined(HighFrequencies_0_1_DacClk__CFG3) */

#endif /* CY_CLOCK_HighFrequencies_0_1_DacClk_H */


/* [] END OF FILE */
