/********************************************
 *	Filename: buttons.c						*
 *	Author:   Dan Kass kassd@msoe.edu		*
 *	Date:	  2/14/13						*
 *	Provides:								*
 *		This is the driver file for the use *
 *		of external interrupts for the 		*
 *		buttons								*
 ********************************************/

#include "buttons.h"
#include <avr/interrupt.h>
#include <avr/io.h>

/*********************************
 *	inits the buttons for use of *
 *   the Interrupts				 *
 *********************************/
 void buttons_init()
 {
  //INT1 INT0 INT2 - - - IVSEL IVCE
  //Gerneral Interrupt Control Register
 	GICR = GICR | 0b11000000;//GICR | (1<<INT1) | (1<<INT0);
	MCUCR = MCUCR | 0b00001010;//MCUCR |(0<<ISC11) | (1<<ISC10) | (0<<ISC01) | (1<<ISC00);
	DDRD = 0x00;
	PORTD = 0x00;
 }

 /*ISR(INT0_vect)
 {
 	//will decrement the setpoint by 2degrees
	
	static uint8_t down = 0;
	down++;
	if(down > 150)
	{
		PORTB = 0x0F;
	//	setPoint--;
		down = 0;
	}
 }

 ISR(INT1_vect)
 {
 	//will increase the setpoint by 2degrees
	static uint8_t down2 = 0;
	down2++;
	if(down2 > 150)
	{
		PORTB = 0xF0;
	//	setPoint++;
		down2 = 0;
	}
 }*/

 
