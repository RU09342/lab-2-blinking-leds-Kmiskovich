#include <msp430.h>
/*
 * Kevin Miskovich
 * Lab2_MultiBlink_2311
 * FR2311
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1OUT &= ~BIT0;	            //configure P1.0 as I/O
    P2OUT &= ~BIT0;		    //configure P2.0 as I/O
    P1DIR |= BIT0;      	    //configure P1.0 as output
    P2DIR |= BIT0;		    //configure P2.0 as output
    int count1=0;                   //count variables
    int count2=0;

    PM5CTL0 &= ~LOCKLPM5;           // Disable GPIO default high-z mode

    while(1)
    {
        if(count1 >= 19500)         //when count1 hits or exceeds 19,500
        {
            P1OUT ^= (BIT0);        // toggle P1.0
            count1=0;               //reset count1
        }
        if(count2 >= 20000)         //when count2 hits or exceeds 20,000
        {
            P2OUT ^= (BIT0);        //toggle P2.0
            count2=0;               //reset count2
        }
        count1++;                   //increment count1
        count2++;                   //increment count2
    }
}
