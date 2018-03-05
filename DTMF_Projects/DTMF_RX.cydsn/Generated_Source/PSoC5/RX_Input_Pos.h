/*******************************************************************************
* File Name: RX_Input_Pos.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_RX_Input_Pos_H) /* Pins RX_Input_Pos_H */
#define CY_PINS_RX_Input_Pos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "RX_Input_Pos_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 RX_Input_Pos__PORT == 15 && ((RX_Input_Pos__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    RX_Input_Pos_Write(uint8 value);
void    RX_Input_Pos_SetDriveMode(uint8 mode);
uint8   RX_Input_Pos_ReadDataReg(void);
uint8   RX_Input_Pos_Read(void);
void    RX_Input_Pos_SetInterruptMode(uint16 position, uint16 mode);
uint8   RX_Input_Pos_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the RX_Input_Pos_SetDriveMode() function.
     *  @{
     */
        #define RX_Input_Pos_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define RX_Input_Pos_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define RX_Input_Pos_DM_RES_UP          PIN_DM_RES_UP
        #define RX_Input_Pos_DM_RES_DWN         PIN_DM_RES_DWN
        #define RX_Input_Pos_DM_OD_LO           PIN_DM_OD_LO
        #define RX_Input_Pos_DM_OD_HI           PIN_DM_OD_HI
        #define RX_Input_Pos_DM_STRONG          PIN_DM_STRONG
        #define RX_Input_Pos_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define RX_Input_Pos_MASK               RX_Input_Pos__MASK
#define RX_Input_Pos_SHIFT              RX_Input_Pos__SHIFT
#define RX_Input_Pos_WIDTH              1u

/* Interrupt constants */
#if defined(RX_Input_Pos__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in RX_Input_Pos_SetInterruptMode() function.
     *  @{
     */
        #define RX_Input_Pos_INTR_NONE      (uint16)(0x0000u)
        #define RX_Input_Pos_INTR_RISING    (uint16)(0x0001u)
        #define RX_Input_Pos_INTR_FALLING   (uint16)(0x0002u)
        #define RX_Input_Pos_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define RX_Input_Pos_INTR_MASK      (0x01u) 
#endif /* (RX_Input_Pos__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define RX_Input_Pos_PS                     (* (reg8 *) RX_Input_Pos__PS)
/* Data Register */
#define RX_Input_Pos_DR                     (* (reg8 *) RX_Input_Pos__DR)
/* Port Number */
#define RX_Input_Pos_PRT_NUM                (* (reg8 *) RX_Input_Pos__PRT) 
/* Connect to Analog Globals */                                                  
#define RX_Input_Pos_AG                     (* (reg8 *) RX_Input_Pos__AG)                       
/* Analog MUX bux enable */
#define RX_Input_Pos_AMUX                   (* (reg8 *) RX_Input_Pos__AMUX) 
/* Bidirectional Enable */                                                        
#define RX_Input_Pos_BIE                    (* (reg8 *) RX_Input_Pos__BIE)
/* Bit-mask for Aliased Register Access */
#define RX_Input_Pos_BIT_MASK               (* (reg8 *) RX_Input_Pos__BIT_MASK)
/* Bypass Enable */
#define RX_Input_Pos_BYP                    (* (reg8 *) RX_Input_Pos__BYP)
/* Port wide control signals */                                                   
#define RX_Input_Pos_CTL                    (* (reg8 *) RX_Input_Pos__CTL)
/* Drive Modes */
#define RX_Input_Pos_DM0                    (* (reg8 *) RX_Input_Pos__DM0) 
#define RX_Input_Pos_DM1                    (* (reg8 *) RX_Input_Pos__DM1)
#define RX_Input_Pos_DM2                    (* (reg8 *) RX_Input_Pos__DM2) 
/* Input Buffer Disable Override */
#define RX_Input_Pos_INP_DIS                (* (reg8 *) RX_Input_Pos__INP_DIS)
/* LCD Common or Segment Drive */
#define RX_Input_Pos_LCD_COM_SEG            (* (reg8 *) RX_Input_Pos__LCD_COM_SEG)
/* Enable Segment LCD */
#define RX_Input_Pos_LCD_EN                 (* (reg8 *) RX_Input_Pos__LCD_EN)
/* Slew Rate Control */
#define RX_Input_Pos_SLW                    (* (reg8 *) RX_Input_Pos__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define RX_Input_Pos_PRTDSI__CAPS_SEL       (* (reg8 *) RX_Input_Pos__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define RX_Input_Pos_PRTDSI__DBL_SYNC_IN    (* (reg8 *) RX_Input_Pos__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define RX_Input_Pos_PRTDSI__OE_SEL0        (* (reg8 *) RX_Input_Pos__PRTDSI__OE_SEL0) 
#define RX_Input_Pos_PRTDSI__OE_SEL1        (* (reg8 *) RX_Input_Pos__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define RX_Input_Pos_PRTDSI__OUT_SEL0       (* (reg8 *) RX_Input_Pos__PRTDSI__OUT_SEL0) 
#define RX_Input_Pos_PRTDSI__OUT_SEL1       (* (reg8 *) RX_Input_Pos__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define RX_Input_Pos_PRTDSI__SYNC_OUT       (* (reg8 *) RX_Input_Pos__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(RX_Input_Pos__SIO_CFG)
    #define RX_Input_Pos_SIO_HYST_EN        (* (reg8 *) RX_Input_Pos__SIO_HYST_EN)
    #define RX_Input_Pos_SIO_REG_HIFREQ     (* (reg8 *) RX_Input_Pos__SIO_REG_HIFREQ)
    #define RX_Input_Pos_SIO_CFG            (* (reg8 *) RX_Input_Pos__SIO_CFG)
    #define RX_Input_Pos_SIO_DIFF           (* (reg8 *) RX_Input_Pos__SIO_DIFF)
#endif /* (RX_Input_Pos__SIO_CFG) */

/* Interrupt Registers */
#if defined(RX_Input_Pos__INTSTAT)
    #define RX_Input_Pos_INTSTAT            (* (reg8 *) RX_Input_Pos__INTSTAT)
    #define RX_Input_Pos_SNAP               (* (reg8 *) RX_Input_Pos__SNAP)
    
	#define RX_Input_Pos_0_INTTYPE_REG 		(* (reg8 *) RX_Input_Pos__0__INTTYPE)
#endif /* (RX_Input_Pos__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_RX_Input_Pos_H */


/* [] END OF FILE */
