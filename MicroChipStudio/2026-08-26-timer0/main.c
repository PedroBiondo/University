/*
 * 2026-08-26-timer0.c
 *
 * Created: 26/08/2026 21:21:34
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
ISR(TIMER0_OVF_vect);
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
ISR(TIMER0_OVF_vect)
{
	contagem += 1;
	if(contagem >= 977)
	{
		invertBit(PORTB, led);
		contagem = 0;
	}
}
void configuraTemporizador(void)
{
	cli(); // Cancela as interrupções
	TCCR0A = 0b00000000;
	TCCR0B = 0b00000011;
	TIMSK0 = 0b00000001;
	sei(); //habilita as interrupções
}