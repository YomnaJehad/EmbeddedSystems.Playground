/*******************************************************************************
* File Name: Segment_2.c  
* Version 1.60
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cytypes.h"
#include "Segment_2.h"


/*******************************************************************************
* Function Name: Segment_2_Write
********************************************************************************
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  void 
*  
*******************************************************************************/
void Segment_2_Write(uint8 value) 
{
    uint8 staticBits = Segment_2_DR & ~Segment_2_MASK;
    Segment_2_DR = staticBits | ((value << Segment_2_SHIFT) & Segment_2_MASK);
}


/*******************************************************************************
* Function Name: Segment_2_SetDriveMode
********************************************************************************
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  void
*
*******************************************************************************/
void Segment_2_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Segment_2_0, mode);
}


/*******************************************************************************
* Function Name: Segment_2_Read
********************************************************************************
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Segment_2_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Segment_2_Read(void) 
{
    return (Segment_2_PS & Segment_2_MASK) >> Segment_2_SHIFT;
}


/*******************************************************************************
* Function Name: Segment_2_ReadDataReg
********************************************************************************
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Segment_2_ReadDataReg(void) 
{
    return (Segment_2_DR & Segment_2_MASK) >> Segment_2_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Segment_2_INTSTAT) 

    /*******************************************************************************
    * Function Name: Segment_2_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  void 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Segment_2_ClearInterrupt(void) 
    {
        return (Segment_2_INTSTAT & Segment_2_MASK) >> Segment_2_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */ 
