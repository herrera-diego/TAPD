/*******************************************************************************
* File Name: HighFrequencies_2_VDAC8_PM.c  
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

#include "HighFrequencies_2_VDAC8.h"

static HighFrequencies_2_VDAC8_backupStruct HighFrequencies_2_VDAC8_backup;


/*******************************************************************************
* Function Name: HighFrequencies_2_VDAC8_SaveConfig
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
void HighFrequencies_2_VDAC8_SaveConfig(void) 
{
    if (!((HighFrequencies_2_VDAC8_CR1 & HighFrequencies_2_VDAC8_SRC_MASK) == HighFrequencies_2_VDAC8_SRC_UDB))
    {
        HighFrequencies_2_VDAC8_backup.data_value = HighFrequencies_2_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: HighFrequencies_2_VDAC8_RestoreConfig
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
void HighFrequencies_2_VDAC8_RestoreConfig(void) 
{
    if (!((HighFrequencies_2_VDAC8_CR1 & HighFrequencies_2_VDAC8_SRC_MASK) == HighFrequencies_2_VDAC8_SRC_UDB))
    {
        if((HighFrequencies_2_VDAC8_Strobe & HighFrequencies_2_VDAC8_STRB_MASK) == HighFrequencies_2_VDAC8_STRB_EN)
        {
            HighFrequencies_2_VDAC8_Strobe &= (uint8)(~HighFrequencies_2_VDAC8_STRB_MASK);
            HighFrequencies_2_VDAC8_Data = HighFrequencies_2_VDAC8_backup.data_value;
            HighFrequencies_2_VDAC8_Strobe |= HighFrequencies_2_VDAC8_STRB_EN;
        }
        else
        {
            HighFrequencies_2_VDAC8_Data = HighFrequencies_2_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: HighFrequencies_2_VDAC8_Sleep
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
*  HighFrequencies_2_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void HighFrequencies_2_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(HighFrequencies_2_VDAC8_ACT_PWR_EN == (HighFrequencies_2_VDAC8_PWRMGR & HighFrequencies_2_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        HighFrequencies_2_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        HighFrequencies_2_VDAC8_backup.enableState = 0u;
    }
    
    HighFrequencies_2_VDAC8_Stop();
    HighFrequencies_2_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: HighFrequencies_2_VDAC8_Wakeup
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
*  HighFrequencies_2_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void HighFrequencies_2_VDAC8_Wakeup(void) 
{
    HighFrequencies_2_VDAC8_RestoreConfig();
    
    if(HighFrequencies_2_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        HighFrequencies_2_VDAC8_Enable();

        /* Restore the data register */
        HighFrequencies_2_VDAC8_SetValue(HighFrequencies_2_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */