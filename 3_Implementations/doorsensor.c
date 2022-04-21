#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
int main(void)
{
	DDRB=DDRB&0b11111101;//fd
	DDRC=DDRC|0b01000000;//40
	while(1)
	{
if(PINB & 0b00000010)//02
	PORTC=PORTC|0b01000000;//40
		else
		PORTC=PORTC&0b10111111;//bf
	}
	return 0;
	}