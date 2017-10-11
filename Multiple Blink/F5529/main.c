#include <msp430.h>
/*
 * Kevin Miskovich
 * Lab2_MultiBlink_5529
 * F5529
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1OUT &= ~BIT0;	            //configure P1.0 as I/O
    P4OUT &= ~BIT7;		    //configure P4.7 as I/O
    P1DIR |= BIT0;      	    //configure P1.0 as output
    P4DIR |= BIT7;		    //configure P4.7 as output
    int count1=0;                   //count variables
    int count2=0;

    while(1)
    {
        if(count1 >= 19500)         //when count1 hits or exceeds 19,500
        {
            P1OUT ^= (BIT0);        // toggle P1.0
            count1=0;               //reset count1
        }
        if(count2 >= 20000)         //when count2 hits or exceeds 20,000
        {
            P4OUT ^= (BIT7);        //toggle P4.7
            count2=0;               //reset count2
        }
        count1++;                   //increment count1
        count2++;                   //increment count2
    }
}
