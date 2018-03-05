/*******************************************************************************
* File Name: HF_DAC_1_VDAC8.c  
* Version 1.90
*
* Description:
*  This file provides the source code to the API for the 8-bit Voltage DAC 
*  (VDAC8) User Module.
*
* Note:
*  Any unusual or non-standard behavior should be noted here. Other-
*  wise, this section should remain blank.
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "HF_DAC_1_VDAC8.h"

#if (CY_PSOC5A)
#include <CyLib.h>
#endif /* CY_PSOC5A */

uint8 HF_DAC_1_VDAC8_initVar = 0u;

#if (CY_PSOC5A)
    static uint8 HF_DAC_1_VDAC8_restoreVal = 0u;
#endif /* CY_PSOC5A */

#if (CY_PSOC5A)
    static HF_DAC_1_VDAC8_backupStruct HF_DAC_1_VDAC8_backup;
#endif /* CY_PSOC5A */


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_Init
********************************************************************************
* Summary:
*  Initialize to the schematic state.
* 
* Parameters:
*  void:
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_Init(void) 
{
    HF_DAC_1_VDAC8_CR0 = (HF_DAC_1_VDAC8_MODE_V );

    /* Set default data source */
    #if(HF_DAC_1_VDAC8_DEFAULT_DATA_SRC != 0 )
        HF_DAC_1_VDAC8_CR1 = (HF_DAC_1_VDAC8_DEFAULT_CNTL | HF_DAC_1_VDAC8_DACBUS_ENABLE) ;
    #else
        HF_DAC_1_VDAC8_CR1 = (HF_DAC_1_VDAC8_DEFAULT_CNTL | HF_DAC_1_VDAC8_DACBUS_DISABLE) ;
    #endif /* (HF_DAC_1_VDAC8_DEFAULT_DATA_SRC != 0 ) */

    /* Set default strobe mode */
    #if(HF_DAC_1_VDAC8_DEFAULT_STRB != 0)
        HF_DAC_1_VDAC8_Strobe |= HF_DAC_1_VDAC8_STRB_EN ;
    #endif/* (HF_DAC_1_VDAC8_DEFAULT_STRB != 0) */

    /* Set default range */
    HF_DAC_1_VDAC8_SetRange(HF_DAC_1_VDAC8_DEFAULT_RANGE); 

    /* Set default speed */
    HF_DAC_1_VDAC8_SetSpeed(HF_DAC_1_VDAC8_DEFAULT_SPEED);
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_Enable
********************************************************************************
* Summary:
*  Enable the VDAC8
* 
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_Enable(void) 
{
    HF_DAC_1_VDAC8_PWRMGR |= HF_DAC_1_VDAC8_ACT_PWR_EN;
    HF_DAC_1_VDAC8_STBY_PWRMGR |= HF_DAC_1_VDAC8_STBY_PWR_EN;

    /*This is to restore the value of register CR0 ,
    which is modified  in Stop API , this prevents misbehaviour of VDAC */
    #if (CY_PSOC5A)
        if(HF_DAC_1_VDAC8_restoreVal == 1u) 
        {
             HF_DAC_1_VDAC8_CR0 = HF_DAC_1_VDAC8_backup.data_value;
             HF_DAC_1_VDAC8_restoreVal = 0u;
        }
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as
*  executing the stop function.
*
* Parameters:
*  Power: Sets power level between off (0) and (3) high power
*
* Return:
*  void 
*
* Global variables:
*  HF_DAC_1_VDAC8_initVar: Is modified when this function is called for the 
*  first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void HF_DAC_1_VDAC8_Start(void)  
{
    /* Hardware initiazation only needs to occure the first time */
    if(HF_DAC_1_VDAC8_initVar == 0u)
    { 
        HF_DAC_1_VDAC8_Init();
        HF_DAC_1_VDAC8_initVar = 1u;
    }

    /* Enable power to DAC */
    HF_DAC_1_VDAC8_Enable();

    /* Set default value */
    HF_DAC_1_VDAC8_SetValue(HF_DAC_1_VDAC8_DEFAULT_DATA); 
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_Stop
********************************************************************************
*
* Summary:
*  Powers down DAC to lowest power state.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_Stop(void) 
{
    /* Disble power to DAC */
    HF_DAC_1_VDAC8_PWRMGR &= (uint8)(~HF_DAC_1_VDAC8_ACT_PWR_EN);
    HF_DAC_1_VDAC8_STBY_PWRMGR &= (uint8)(~HF_DAC_1_VDAC8_STBY_PWR_EN);

    /* This is a work around for PSoC5A  ,
    this sets VDAC to current mode with output off */
    #if (CY_PSOC5A)
        HF_DAC_1_VDAC8_backup.data_value = HF_DAC_1_VDAC8_CR0;
        HF_DAC_1_VDAC8_CR0 = HF_DAC_1_VDAC8_CUR_MODE_OUT_OFF;
        HF_DAC_1_VDAC8_restoreVal = 1u;
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_SetSpeed
********************************************************************************
*
* Summary:
*  Set DAC speed
*
* Parameters:
*  power: Sets speed value
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_SetSpeed(uint8 speed) 
{
    /* Clear power mask then write in new value */
    HF_DAC_1_VDAC8_CR0 &= (uint8)(~HF_DAC_1_VDAC8_HS_MASK);
    HF_DAC_1_VDAC8_CR0 |=  (speed & HF_DAC_1_VDAC8_HS_MASK);
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_SetRange
********************************************************************************
*
* Summary:
*  Set one of three current ranges.
*
* Parameters:
*  Range: Sets one of Three valid ranges.
*
* Return:
*  void 
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_SetRange(uint8 range) 
{
    HF_DAC_1_VDAC8_CR0 &= (uint8)(~HF_DAC_1_VDAC8_RANGE_MASK);      /* Clear existing mode */
    HF_DAC_1_VDAC8_CR0 |= (range & HF_DAC_1_VDAC8_RANGE_MASK);      /*  Set Range  */
    HF_DAC_1_VDAC8_DacTrim();
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_SetValue
********************************************************************************
*
* Summary:
*  Set 8-bit DAC value
*
* Parameters:  
*  value:  Sets DAC value between 0 and 255.
*
* Return: 
*  void 
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_SetValue(uint8 value) 
{
    #if (CY_PSOC5A)
        uint8 HF_DAC_1_VDAC8_intrStatus = CyEnterCriticalSection();
    #endif /* CY_PSOC5A */

    HF_DAC_1_VDAC8_Data = value;                /*  Set Value  */

    /* PSOC5A requires a double write */
    /* Exit Critical Section */
    #if (CY_PSOC5A)
        HF_DAC_1_VDAC8_Data = value;
        CyExitCriticalSection(HF_DAC_1_VDAC8_intrStatus);
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: HF_DAC_1_VDAC8_DacTrim
********************************************************************************
*
* Summary:
*  Set the trim value for the given range.
*
* Parameters:
*  range:  1V or 4V range.  See constants.
*
* Return:
*  void
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void HF_DAC_1_VDAC8_DacTrim(void) 
{
    uint8 mode;

    mode = (uint8)((HF_DAC_1_VDAC8_CR0 & HF_DAC_1_VDAC8_RANGE_MASK) >> 2) + HF_DAC_1_VDAC8_TRIM_M7_1V_RNG_OFFSET;
    HF_DAC_1_VDAC8_TR = CY_GET_XTND_REG8((uint8 *)(HF_DAC_1_VDAC8_DAC_TRIM_BASE + mode));
}


/* [] END OF FILE */
