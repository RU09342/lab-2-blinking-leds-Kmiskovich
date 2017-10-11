#include <msp430.h>
/*
 * Kevin Miskovich
 * Lab2_MultiBlink_G2
 * G2553
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1OUT &= ~(BIT0 + BIT6);	    //configure P1.0 and P1.6 as I/O
    P1DIR |= (BIT0 + BIT6);         //configure P1.0 and P1.6 as outputs
    int count1=0;                   //count variables
    int count2=0;

    while(1)
    {
        if(count1 >= 19500)         //when count1 hits or exceeds 19,500
        {
        P1OUT ^= (BIT0);            // toggle P1.0
        count1=0;                   //reset count1
        }
        if(count2 >= 20000)         //when count2 hits or exceeds 20,000
        {
            P1OUT ^= (BIT6);        //toggle P1.6
            count2=0;               //reset count2
        }
        count1++;                   //increment count1
        count2++;                   //increment count2
    }
}
