#include <msp430.h>				
/*
 * Kevin Miskovich
 * Lab 2 Part 1: Simple Blink
 * F5529
 */
void blinkG2(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	P1DIR |= 0x01;				// configure P1.0 as output

	volatile unsigned int i;		// volatile to prevent optimization

	while(1)
	{
		P1OUT ^= 0x01;			// toggle P1.0
		for(i=40000; i>0; i--);         // delay
	}
}
