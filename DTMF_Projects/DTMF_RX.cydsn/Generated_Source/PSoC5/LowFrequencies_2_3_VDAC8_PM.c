/*******************************************************************************
* File Name: LowFrequencies_2_3_VDAC8_PM.c  
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

#include "LowFrequencies_2_3_VDAC8.h"

static LowFrequencies_2_3_VDAC8_backupStruct LowFrequencies_2_3_VDAC8_backup;


/*******************************************************************************
* Function Name: LowFrequencies_2_3_VDAC8_SaveConfig
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
void LowFrequencies_2_3_VDAC8_SaveConfig(void) 
{
    if (!((LowFrequencies_2_3_VDAC8_CR1 & LowFrequencies_2_3_VDAC8_SRC_MASK) == LowFrequencies_2_3_VDAC8_SRC_UDB))
    {
        LowFrequencies_2_3_VDAC8_backup.data_value = LowFrequencies_2_3_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: LowFrequencies_2_3_VDAC8_RestoreConfig
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
void LowFrequencies_2_3_VDAC8_RestoreConfig(void) 
{
    if (!((LowFrequencies_2_3_VDAC8_CR1 & LowFrequencies_2_3_VDAC8_SRC_MASK) == LowFrequencies_2_3_VDAC8_SRC_UDB))
    {
        if((LowFrequencies_2_3_VDAC8_Strobe & LowFrequencies_2_3_VDAC8_STRB_MASK) == LowFrequencies_2_3_VDAC8_STRB_EN)
        {
            LowFrequencies_2_3_VDAC8_Strobe &= (uint8)(~LowFrequencies_2_3_VDAC8_STRB_MASK);
            LowFrequencies_2_3_VDAC8_Data = LowFrequencies_2_3_VDAC8_backup.data_value;
            LowFrequencies_2_3_VDAC8_Strobe |= LowFrequencies_2_3_VDAC8_STRB_EN;
        }
        else
        {
            LowFrequencies_2_3_VDAC8_Data = LowFrequencies_2_3_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: LowFrequencies_2_3_VDAC8_Sleep
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
*  LowFrequencies_2_3_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void LowFrequencies_2_3_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(LowFrequencies_2_3_VDAC8_ACT_PWR_EN == (LowFrequencies_2_3_VDAC8_PWRMGR & LowFrequencies_2_3_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        LowFrequencies_2_3_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        LowFrequencies_2_3_VDAC8_backup.enableState = 0u;
    }
    
    LowFrequencies_2_3_VDAC8_Stop();
    LowFrequencies_2_3_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: LowFrequencies_2_3_VDAC8_Wakeup
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
*  LowFrequencies_2_3_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void LowFrequencies_2_3_VDAC8_Wakeup(void) 
{
    LowFrequencies_2_3_VDAC8_RestoreConfig();
    
    if(LowFrequencies_2_3_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        LowFrequencies_2_3_VDAC8_Enable();

        /* Restore the data register */
        LowFrequencies_2_3_VDAC8_SetValue(LowFrequencies_2_3_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
