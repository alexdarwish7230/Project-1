#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <math.h>
#include <p18f4620.h>

#pragma config OSC = INTIO67
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config BOREN = OFF

void Delay_One_Sec()
{
        for (int I=0;I<25000;I++);
}

char array[8]={0x85,0xA7,0xE3,0x06,0x21,0x62,
0xC4,0x40};
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
     for (char i=0;i<8;i++)
     {
     PORTC=i;
     PORTD = array[i];
    Delay_One_Sec();
     
     }
    
     
     
}
}
