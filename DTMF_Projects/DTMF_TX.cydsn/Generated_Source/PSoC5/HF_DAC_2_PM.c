/*******************************************************************************
* File Name: HF_DAC_2_PM.c  
* Version 2.10
*
* Description:
*  This file provides the power manager source code to the API for 
*  the WaveDAC8 component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "HF_DAC_2.h"

static HF_DAC_2_BACKUP_STRUCT  HF_DAC_2_backup;


/*******************************************************************************
* Function Name: HF_DAC_2_Sleep
********************************************************************************
*
* Summary:
*  Stops the component and saves its configuration. Should be called 
*  just prior to entering sleep.
*  
* Parameters:  
*  None
*
* Return: 
*  None
*
* Global variables:
*  HF_DAC_2_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void HF_DAC_2_Sleep(void) 
{
	/* Save DAC8's enable state */

	HF_DAC_2_backup.enableState = (HF_DAC_2_VDAC8_ACT_PWR_EN == 
		(HF_DAC_2_VDAC8_PWRMGR_REG & HF_DAC_2_VDAC8_ACT_PWR_EN)) ? 1u : 0u ;
	
	HF_DAC_2_Stop();
	HF_DAC_2_SaveConfig();
}


/*******************************************************************************
* Function Name: HF_DAC_2_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component configuration. Should be called
*  just after awaking from sleep.
*  
* Parameters:  
*  None
*
* Return: 
*  void
*
* Global variables:
*  HF_DAC_2_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void HF_DAC_2_Wakeup(void) 
{
	HF_DAC_2_RestoreConfig();

	if(HF_DAC_2_backup.enableState == 1u)
	{
		HF_DAC_2_Enable();
	}
}


/* [] END OF FILE */
