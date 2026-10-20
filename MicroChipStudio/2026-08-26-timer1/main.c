/*
 * 2026-08-26-timer1.c
 *
 * Created: 26/08/2026 22:10:47
 * Author : Pedro Biondo Soares
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>


#define lerBit(registrador, bit) ((registrador &= (1 << bit)) >> bit)
#define ligaBit(registrador, bit) (registrador |= (1 << bit)) // Configura o pino PB1 como saída
#define desligaBit(registrador, bit) (registrador &= ~(1 << bit)) // macro para desligar a saída
#define invertBit(registrador, bit) (registrador ^= (1 << bit))

#define led PB1

uint16_t contagem = 0;

/*----------prototipo das funções----------*/
ISR(TIMER0_COMPA_vect);
void configuraTemporizador(void);
/*-----------------------------------------*/

int main(void)
{
	ligaBit(DDRB, led);
	configuraTemporizador();
	
	while (1)
	{
		
	}
}

/*----------corpo das funções----------*/
ISR(TIMER0_COMPA_vect)
{
	contagem += 1;
	if(contagem >= 1000)
	{
		invertBit(PORTB, led);
		contagem = 0;
	}
}
void configuraTemporizador(void)
{
	cli(); // Cancela as interrupções
	TCCR0A = 0b00000010;
	TCCR0B = 0b00000011;
	OCR0A  =	    249;
	TIMSK0 = 0b00000010;
	sei(); //habilita as interrupções
}