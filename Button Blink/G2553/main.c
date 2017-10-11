#include <msp430.h>
/*
 * Kevin Miskovich
 * Lab2_ButtonBlink_G2
 * G2553
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       //stop watchdog timer
    P1OUT &= ~BIT0;		    //configure P1.0 as I/O
    P1DIR |= 0x01;                  //configure P1.0 as output
    P1REN |= (BIT3);                //enable pull up resistor for bit 3
    P1OUT |= (BIT3);                //set pull up resistor
    int count1=0;

    while(1)
    {
        if (!(P1IN & BIT3))              //Start if P1.3[S2] is not pressed
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
