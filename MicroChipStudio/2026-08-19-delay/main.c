/*
 * 2026-08-19-delay.c
 *
 * Created: 19/08/2026 21:55:32
 * Author : Pedro Biondo Soares
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/delay.h> //esta biblioteca é responsavel pelo funcionamento do delay

#define led PB1

int main(void)
{
    DDRB |= (1 << led);
    while (1) 
    {
		_delay_ms(1000);
		PORTB ^= (1 << led); // Logica XOR ^=
    }
}

