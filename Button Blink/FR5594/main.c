#include <msp430.h>
/*
 * Kevin Miskovich
 * Lab2_ButtonBlink_5994
 * FR5994
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       //stop watchdog timer
    P1OUT &= ~BIT0;		    //configure P1.0 as I/O
    P1DIR |= 0x01;                  //configure P1.0 as output
    P5REN |= (BIT6);                //enable pull up resistor for P5.6
    P5OUT |= (BIT6);                //set pull up resistor
    int count1=0;

    PM5CTL0 &= ~LOCKLPM5;	    //disable default high-z mode

    while(1)
    {
        if (!(P5IN & BIT6))              //Start if P5.6[S1] is not pressed
            {
                P1OUT &= ~(BIT0);        // toggle P1.0
            }
        else
        {
            if (count1 > 20000)
                {
                    P1OUT ^= BIT0;       //toggle P1.0 [LED] if count exceeds 20,000
                    count1 = 0;          //reset count after the LED toggles
                }

            else
                {
                    count1++;            //increment count
                }
        }
    }
}
