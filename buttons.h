/********************************************
 *	Filename: buttons.h						*
 *	Author:   Dan Kass kassd@msoe.edu		*
 *	Date:	  2/14/13						*
 *	Provides:								*
 *		This is the driver file for the use *
 *		of external interrupts for the 		*
 *		buttons								*
 ********************************************/

#include <inttypes.h>
 //enables/disables the alarm
 	//default to off
 volatile uint8_t alarm;
 //the set point number for the bar graph
 	//43 is the adc number equvilant to 
	// 84degrees F
 volatile uint8_t setPoint;

/*********************************
 *	inits the buttons for use of *
 *   the Interrupts				 *
 *********************************/
 void buttons_init(void);
