/*******************************************************************************
* File Name: HF_DAC_2_VDAC8_PM.c  
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

#include "HF_DAC_2_VDAC8.h"

static HF_DAC_2_VDAC8_backupStruct HF_DAC_2_VDAC8_backup;


/*******************************************************************************
* Function Name: HF_DAC_2_VDAC8_SaveConfig
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
void HF_DAC_2_VDAC8_SaveConfig(void) 
{
    if (!((HF_DAC_2_VDAC8_CR1 & HF_DAC_2_VDAC8_SRC_MASK) == HF_DAC_2_VDAC8_SRC_UDB))
    {
        HF_DAC_2_VDAC8_backup.data_value = HF_DAC_2_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: HF_DAC_2_VDAC8_RestoreConfig
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
void HF_DAC_2_VDAC8_RestoreConfig(void) 
{
    if (!((HF_DAC_2_VDAC8_CR1 & HF_DAC_2_VDAC8_SRC_MASK) == HF_DAC_2_VDAC8_SRC_UDB))
    {
        if((HF_DAC_2_VDAC8_Strobe & HF_DAC_2_VDAC8_STRB_MASK) == HF_DAC_2_VDAC8_STRB_EN)
        {
            HF_DAC_2_VDAC8_Strobe &= (uint8)(~HF_DAC_2_VDAC8_STRB_MASK);
            HF_DAC_2_VDAC8_Data = HF_DAC_2_VDAC8_backup.data_value;
            HF_DAC_2_VDAC8_Strobe |= HF_DAC_2_VDAC8_STRB_EN;
        }
        else
        {
            HF_DAC_2_VDAC8_Data = HF_DAC_2_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: HF_DAC_2_VDAC8_Sleep
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
*  HF_DAC_2_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void HF_DAC_2_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(HF_DAC_2_VDAC8_ACT_PWR_EN == (HF_DAC_2_VDAC8_PWRMGR & HF_DAC_2_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        HF_DAC_2_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        HF_DAC_2_VDAC8_backup.enableState = 0u;
    }
    
    HF_DAC_2_VDAC8_Stop();
    HF_DAC_2_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: HF_DAC_2_VDAC8_Wakeup
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
*  HF_DAC_2_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void HF_DAC_2_VDAC8_Wakeup(void) 
{
    HF_DAC_2_VDAC8_RestoreConfig();
    
    if(HF_DAC_2_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        HF_DAC_2_VDAC8_Enable();

        /* Restore the data register */
        HF_DAC_2_VDAC8_SetValue(HF_DAC_2_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
