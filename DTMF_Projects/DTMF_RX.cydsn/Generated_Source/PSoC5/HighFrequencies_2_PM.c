/*******************************************************************************
* File Name: HighFrequencies_2_PM.c  
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

#include "HighFrequencies_2.h"

static HighFrequencies_2_BACKUP_STRUCT  HighFrequencies_2_backup;


/*******************************************************************************
* Function Name: HighFrequencies_2_Sleep
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
*  HighFrequencies_2_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void HighFrequencies_2_Sleep(void) 
{
	/* Save DAC8's enable state */

	HighFrequencies_2_backup.enableState = (HighFrequencies_2_VDAC8_ACT_PWR_EN == 
		(HighFrequencies_2_VDAC8_PWRMGR_REG & HighFrequencies_2_VDAC8_ACT_PWR_EN)) ? 1u : 0u ;
	
	HighFrequencies_2_Stop();
	HighFrequencies_2_SaveConfig();
}


/*******************************************************************************
* Function Name: HighFrequencies_2_Wakeup
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
*  HighFrequencies_2_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void HighFrequencies_2_Wakeup(void) 
{
	HighFrequencies_2_RestoreConfig();

	if(HighFrequencies_2_backup.enableState == 1u)
	{
		HighFrequencies_2_Enable();
	}
}


/* [] END OF FILE */
