 /******************************************************************************
 *
 * Module: Timer1
 *
 * File Name: Timer1.c
 *
 * Description: Source file for the UART AVR driver
 *
 * Author: Mohab Amged
 *
 *******************************************************************************/
#ifndef TIMER1_H_
#define TIMER1_H_


/*******************************************************************************
 *                            Includes                                         *
 *******************************************************************************/
#include "common_macros.h" /* To use the macros like SET_BIT */
#include "avr/io.h" /* To use the UART Registers */
#include "std_types.h"
#include <avr/interrupt.h>
/*******************************************************************************
 *                              Types                                          *
 *******************************************************************************/


typedef enum
{
		TIMER1_CLOCK=1 ,
		TIMER1_CLOCK8,
		TIMER1_CLOCK64,
		TIMER1_CLOCK256,
		TIMER1_CLOCK1024
}Timer1_Prescaler;

typedef enum
{
	TIMER1_NORMAL,
	TIMER1_COMPAREMODE

}Timer1_Mode;



typedef struct {
 uint16 initial_value;
 uint16 compare_value; // it will be used in compare mode only.
 Timer1_Prescaler prescaler;
 Timer1_Mode mode;
} Timer1_ConfigType;
/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/* Init Function For Timer 1 Module */
void Timer1_init(const Timer1_ConfigType * Config_Ptr);


/* Deinit Function */
void Timer1_deInit(void);

/* Setting The Call Back For the Timer MOdule */

void Timer1_setCallBack(void(*a_ptr)(void));





#endif /* TIMER1_H_ */
