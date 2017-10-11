# Kevin Miskovich

## Off Board Blink
The codes in this project are written in C and are used to blink an LED with a 50% duty cycle on each of the boards listed below. The code utilized a permanently activated while loop that toggles the LED continuously on a set delay.
The code used is identical to the Multiple Blink code for the G2553.
In order for this to work, the code must be loaded onto the processor then removed from the board, placed onto a breadboard and supplying it with 1.8V-3.6V on the correct pins.

## The Following Processors' Codes Are Implemented:
* MSP430G2553

## Dependencies
This library only depends on the MSP430.h header file for TI MSP430 processors. This file is included in each of the C files. No other header files are required.

### Peripherals Used
The only peripherals being used are LED outputs coming from the board:
G2443: P1.0 [LED1] and P1.6 [LED2]
The leads are fed from the pins labeled above to pullup resistors and then into the LEDs. 

## Usage
The multiple blink codes work automatically; there are no inputs from the user (such as a button) and the output LEDs blink with a duty cycle of 50% at their given frequencies.

