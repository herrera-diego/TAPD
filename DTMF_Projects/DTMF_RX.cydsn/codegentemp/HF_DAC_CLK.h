/*******************************************************************************
* File Name: HF_DAC_CLK.h
* Version 2.20
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

#if !defined(CY_CLOCK_HF_DAC_CLK_H)
#define CY_CLOCK_HF_DAC_CLK_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void HF_DAC_CLK_Start(void) ;
void HF_DAC_CLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void HF_DAC_CLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void HF_DAC_CLK_StandbyPower(uint8 state) ;
void HF_DAC_CLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 HF_DAC_CLK_GetDividerRegister(void) ;
void HF_DAC_CLK_SetModeRegister(uint8 modeBitMask) ;
void HF_DAC_CLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 HF_DAC_CLK_GetModeRegister(void) ;
void HF_DAC_CLK_SetSourceRegister(uint8 clkSource) ;
uint8 HF_DAC_CLK_GetSourceRegister(void) ;
#if defined(HF_DAC_CLK__CFG3)
void HF_DAC_CLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 HF_DAC_CLK_GetPhaseRegister(void) ;
#endif /* defined(HF_DAC_CLK__CFG3) */

#define HF_DAC_CLK_Enable()                       HF_DAC_CLK_Start()
#define HF_DAC_CLK_Disable()                      HF_DAC_CLK_Stop()
#define HF_DAC_CLK_SetDivider(clkDivider)         HF_DAC_CLK_SetDividerRegister(clkDivider, 1u)
#define HF_DAC_CLK_SetDividerValue(clkDivider)    HF_DAC_CLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define HF_DAC_CLK_SetMode(clkMode)               HF_DAC_CLK_SetModeRegister(clkMode)
#define HF_DAC_CLK_SetSource(clkSource)           HF_DAC_CLK_SetSourceRegister(clkSource)
#if defined(HF_DAC_CLK__CFG3)
#define HF_DAC_CLK_SetPhase(clkPhase)             HF_DAC_CLK_SetPhaseRegister(clkPhase)
#define HF_DAC_CLK_SetPhaseValue(clkPhase)        HF_DAC_CLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(HF_DAC_CLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define HF_DAC_CLK_CLKEN              (* (reg8 *) HF_DAC_CLK__PM_ACT_CFG)
#define HF_DAC_CLK_CLKEN_PTR          ((reg8 *) HF_DAC_CLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define HF_DAC_CLK_CLKSTBY            (* (reg8 *) HF_DAC_CLK__PM_STBY_CFG)
#define HF_DAC_CLK_CLKSTBY_PTR        ((reg8 *) HF_DAC_CLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define HF_DAC_CLK_DIV_LSB            (* (reg8 *) HF_DAC_CLK__CFG0)
#define HF_DAC_CLK_DIV_LSB_PTR        ((reg8 *) HF_DAC_CLK__CFG0)
#define HF_DAC_CLK_DIV_PTR            ((reg16 *) HF_DAC_CLK__CFG0)

/* Clock MSB divider configuration register. */
#define HF_DAC_CLK_DIV_MSB            (* (reg8 *) HF_DAC_CLK__CFG1)
#define HF_DAC_CLK_DIV_MSB_PTR        ((reg8 *) HF_DAC_CLK__CFG1)

/* Mode and source configuration register */
#define HF_DAC_CLK_MOD_SRC            (* (reg8 *) HF_DAC_CLK__CFG2)
#define HF_DAC_CLK_MOD_SRC_PTR        ((reg8 *) HF_DAC_CLK__CFG2)

#if defined(HF_DAC_CLK__CFG3)
/* Analog clock phase configuration register */
#define HF_DAC_CLK_PHASE              (* (reg8 *) HF_DAC_CLK__CFG3)
#define HF_DAC_CLK_PHASE_PTR          ((reg8 *) HF_DAC_CLK__CFG3)
#endif /* defined(HF_DAC_CLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define HF_DAC_CLK_CLKEN_MASK         HF_DAC_CLK__PM_ACT_MSK
#define HF_DAC_CLK_CLKSTBY_MASK       HF_DAC_CLK__PM_STBY_MSK

/* CFG2 field masks */
#define HF_DAC_CLK_SRC_SEL_MSK        HF_DAC_CLK__CFG2_SRC_SEL_MASK
#define HF_DAC_CLK_MODE_MASK          (~(HF_DAC_CLK_SRC_SEL_MSK))

#if defined(HF_DAC_CLK__CFG3)
/* CFG3 phase mask */
#define HF_DAC_CLK_PHASE_MASK         HF_DAC_CLK__CFG3_PHASE_DLY_MASK
#endif /* defined(HF_DAC_CLK__CFG3) */

#endif /* CY_CLOCK_HF_DAC_CLK_H */


/* [] END OF FILE */
