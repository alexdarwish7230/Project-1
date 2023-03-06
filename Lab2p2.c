#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <math.h>
#include <p18f4620.h>

#pragma config OSC = INTIO67
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config BOREN = OFF

void main()
{
char in; // Use variable ?in? as char
 TRISA = 0xFF; // fill out the ?? with the proper values
 TRISB = 0x00; // fill out the ?? with the proper values
 TRISC = 0x00;
 TRISD = 0x00;    
 ADCON1 = 0x0F; // fill out the ?? with the proper values
 PORTB = 0x00;
 while (1)
{
in = PORTA; // read data from PORTA and save it
 // into ?in?
 in = in & 0x07; // Mask out the unused upper four bits
 PORTC = in; // Output the data to PORTC
}
 
 }


