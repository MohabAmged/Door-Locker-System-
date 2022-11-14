/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  DC_Motor.h
 *  Module:  	  Dc Motor
 *
 *  Description:  Header file for the DC Motor
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Mohab Amged
 *	Date:		  6/10/2022
 *********************************************************************************************************************/
#ifndef HAL_DC_MOTOR_H_
#define HAL_DC_MOTOR_H_
/**************************************************************************************************************************************
*
*                                                 INCLUDES
*
**************************************************************************************************************************************/
#include "Macros.h"
#include "Std_Types.h"
#include "GPIO.h"
#include "DC_Motor_Config.h"
/**************************************************************************************************************************************
*
*                                                 types Definition
*
**************************************************************************************************************************************/


	/*              Direction Type                       */
 typedef enum
 {  Stop,
	ClockWise,
	AntiClockWise
 } DcMotor_State;

/**************************************************************************************************************************************
*
*                                                Functions Prototypes
*
**************************************************************************************************************************************/


 void DcMotor_Init(void); /* Init Function */


 /* Set Direction And Speed */
 void DcMotor_Rotate(DcMotor_State Dir  );





#endif /* HAL_DC_MOTOR_H_ */