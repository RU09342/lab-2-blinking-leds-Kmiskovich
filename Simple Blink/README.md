# Kevin Miskovich

## Simple Blink
The codes in this project are written in C and are used to blink an LED with a 50% duty cycle on each of the boards listed below. The code utilized a permanently activated while loop that toggles the LED continuously on a set delay.   

## The Following Processors' Codes Are Implemented:
* MSP430G2553
* MSP430F5529
* MSP430FR2311
* MSP430FR5994
* MSP430FR6989

## Dependencies
This library only depends on the MSP430.h header file for TI MSP430 processors. This file is included in each of the C files. No other header files are required.

### Peripherals Used
The only peripheral being used is P1.0, which is an LED on each of the boards. 

### Differences Between Boards
Most of the code is exactly the same for each processor, with the exception of the MSP430FRx microcontrollers, in which case you must turn off high impedance mode.

## Usage
The simple blink codes work automatically; there are no inputs from the user (such as a button) and the output LED blinks with a duty cycle of 50%.


