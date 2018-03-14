/*******************************************************************************
* File Name: SignalON.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_SignalON_H)
#define CY_ISR_SignalON_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void SignalON_Start(void);
void SignalON_StartEx(cyisraddress address);
void SignalON_Stop(void);

CY_ISR_PROTO(SignalON_Interrupt);

void SignalON_SetVector(cyisraddress address);
cyisraddress SignalON_GetVector(void);

void SignalON_SetPriority(uint8 priority);
uint8 SignalON_GetPriority(void);

void SignalON_Enable(void);
uint8 SignalON_GetState(void);
void SignalON_Disable(void);

void SignalON_SetPending(void);
void SignalON_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the SignalON ISR. */
#define SignalON_INTC_VECTOR            ((reg32 *) SignalON__INTC_VECT)

/* Address of the SignalON ISR priority. */
#define SignalON_INTC_PRIOR             ((reg8 *) SignalON__INTC_PRIOR_REG)

/* Priority of the SignalON interrupt. */
#define SignalON_INTC_PRIOR_NUMBER      SignalON__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable SignalON interrupt. */
#define SignalON_INTC_SET_EN            ((reg32 *) SignalON__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the SignalON interrupt. */
#define SignalON_INTC_CLR_EN            ((reg32 *) SignalON__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the SignalON interrupt state to pending. */
#define SignalON_INTC_SET_PD            ((reg32 *) SignalON__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the SignalON interrupt. */
#define SignalON_INTC_CLR_PD            ((reg32 *) SignalON__INTC_CLR_PD_REG)


#endif /* CY_ISR_SignalON_H */


/* [] END OF FILE */
