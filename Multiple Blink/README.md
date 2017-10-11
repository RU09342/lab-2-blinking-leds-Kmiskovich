# Kevin Miskovich

## Multiple Blink
The codes in this project are written in C and are used to blink an LED with a 50% duty cycle on each of the boards listed below. The code utilized a permanently activated while loop that toggles the LED continuously on a set delay.
Since the frequencies of the two LEDs are close in value, these codes will demonstrate the "beat theory" in which the LEDs will seemingly go in and out of sync.

# The Following Boards Are Implemented:
* MSP430G2553
* MSP430F5529
* MSP430FR2311
* MSP430FR5994
* MSP430FR6989

## Dependencies
This library only depends on the MSP430.h header file for TI MSP430 processors. This file is included in each of the C files. No other header files are required.

### Peripherals Used
The only peripherals being used are LED outputs on each board:
G2443: P1.0 [LED1] and P1.6 [LED2]
F5529: P1.0 [LED1] and P4.7 [LED2]
FR5594: P1.0 [LED1] and P1.1 [LED2]
FR2311: P1.0 [LED1] and P2.0 [LED2]
FR6989: P1.0 [LED1] and P9.7 [LED2]

### Differences Between Boards
Most of the code is exactly the same for each processor, with the exception of the MSP430FRx microcontrollers, in which case you must turn off high impedance mode. Other than that, the only differences are pins, which are differentiated above.

### Even More LEDs
In order to use more LEDs at different rates, we must first create new ints for each LED being used then have them all increment at the same time. Just like the other LEDs, they must hit a threshold, toggle the LED, then reset back to 0. 

## Usage
The multiple blink codes work automatically; there are no inputs from the user (such as a button) and the output LEDs blink with a duty cycle of 50% at their given frequencies.

