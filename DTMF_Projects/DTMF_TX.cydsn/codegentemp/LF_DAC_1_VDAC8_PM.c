/*******************************************************************************
* File Name: LF_DAC_1_VDAC8_PM.c  
* Version 1.90
*
* Description:
*  This file provides the power management source code to API for the
*  VDAC8.  
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "LF_DAC_1_VDAC8.h"

static LF_DAC_1_VDAC8_backupStruct LF_DAC_1_VDAC8_backup;


/*******************************************************************************
* Function Name: LF_DAC_1_VDAC8_SaveConfig
********************************************************************************
* Summary:
*  Save the current user configuration
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void LF_DAC_1_VDAC8_SaveConfig(void) 
{
    if (!((LF_DAC_1_VDAC8_CR1 & LF_DAC_1_VDAC8_SRC_MASK) == LF_DAC_1_VDAC8_SRC_UDB))
    {
        LF_DAC_1_VDAC8_backup.data_value = LF_DAC_1_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: LF_DAC_1_VDAC8_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
*******************************************************************************/
void LF_DAC_1_VDAC8_RestoreConfig(void) 
{
    if (!((LF_DAC_1_VDAC8_CR1 & LF_DAC_1_VDAC8_SRC_MASK) == LF_DAC_1_VDAC8_SRC_UDB))
    {
        if((LF_DAC_1_VDAC8_Strobe & LF_DAC_1_VDAC8_STRB_MASK) == LF_DAC_1_VDAC8_STRB_EN)
        {
            LF_DAC_1_VDAC8_Strobe &= (uint8)(~LF_DAC_1_VDAC8_STRB_MASK);
            LF_DAC_1_VDAC8_Data = LF_DAC_1_VDAC8_backup.data_value;
            LF_DAC_1_VDAC8_Strobe |= LF_DAC_1_VDAC8_STRB_EN;
        }
        else
        {
            LF_DAC_1_VDAC8_Data = LF_DAC_1_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: LF_DAC_1_VDAC8_Sleep
********************************************************************************
* Summary:
*  Stop and Save the user configuration
*
* Parameters:  
*  void:  
*
* Return: 
*  void
*
* Global variables:
*  LF_DAC_1_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void LF_DAC_1_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(LF_DAC_1_VDAC8_ACT_PWR_EN == (LF_DAC_1_VDAC8_PWRMGR & LF_DAC_1_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        LF_DAC_1_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        LF_DAC_1_VDAC8_backup.enableState = 0u;
    }
    
    LF_DAC_1_VDAC8_Stop();
    LF_DAC_1_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: LF_DAC_1_VDAC8_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  LF_DAC_1_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void LF_DAC_1_VDAC8_Wakeup(void) 
{
    LF_DAC_1_VDAC8_RestoreConfig();
    
    if(LF_DAC_1_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        LF_DAC_1_VDAC8_Enable();

        /* Restore the data register */
        LF_DAC_1_VDAC8_SetValue(LF_DAC_1_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
