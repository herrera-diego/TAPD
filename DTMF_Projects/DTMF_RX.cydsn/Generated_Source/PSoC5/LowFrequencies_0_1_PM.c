/*******************************************************************************
* File Name: LowFrequencies_0_1_PM.c  
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

#include "LowFrequencies_0_1.h"

static LowFrequencies_0_1_BACKUP_STRUCT  LowFrequencies_0_1_backup;


/*******************************************************************************
* Function Name: LowFrequencies_0_1_Sleep
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
*  LowFrequencies_0_1_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void LowFrequencies_0_1_Sleep(void) 
{
	/* Save DAC8's enable state */

	LowFrequencies_0_1_backup.enableState = (LowFrequencies_0_1_VDAC8_ACT_PWR_EN == 
		(LowFrequencies_0_1_VDAC8_PWRMGR_REG & LowFrequencies_0_1_VDAC8_ACT_PWR_EN)) ? 1u : 0u ;
	
	LowFrequencies_0_1_Stop();
	LowFrequencies_0_1_SaveConfig();
}


/*******************************************************************************
* Function Name: LowFrequencies_0_1_Wakeup
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
*  LowFrequencies_0_1_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void LowFrequencies_0_1_Wakeup(void) 
{
	LowFrequencies_0_1_RestoreConfig();

	if(LowFrequencies_0_1_backup.enableState == 1u)
	{
		LowFrequencies_0_1_Enable();
	}
}


/* [] END OF FILE */
