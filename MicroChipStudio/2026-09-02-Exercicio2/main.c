/*
 * 2026-09-02-Exercicio2.c
 *
 * Created: 02/09/2026 22:01:18
 * Author : eletrica
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>


#define lerBit(registrador, bit) ((registrador &= (1 << bit)) >> bit)
#define ligaBit(registrador, bit) (registrador |= (1 << bit)) // Configura o pino PB1 como saída
#define desligaBit(registrador, bit) (registrador &= ~(1 << bit)) // macro para desligar a saída
#define invertBit(registrador, bit) (registrador ^= (1 << bit))

#define led PD6
#define led1 PB1
#define led2 PD5

uint16_t contagem = 0;

/*----------prototipo das funções----------*/
ISR(TIMER0_OVF_vect);
void configuraTemporizador(void);
/*-----------------------------------------*/

int main(void)
{
	ligaBit(DDRD, led);
	ligaBit(DDRD, led2);
	ligaBit(DDRB, led1);
	configuraTemporizador();
	while (1)
	{
		
	}
}

/*----------corpo das funções----------*/
ISR(TIMER0_OVF_vect)
{
	static uint8_t duty = 6;
	static uint16_t contagem = 0;
	
	contagem += 1;
	if (contagem >= 1000)
	{
		duty += 49;
		if (duty >=246) duty =6;
		invertBit(PORTB, led1);
		contagem = 0;
	}
	OCR0A = duty;
	TCNT0 = 6;
}
void configuraTemporizador(void)
{
	cli(); // Cancela as interrupções
	TCCR0A = 0b10100011;
	TCCR0B = 0b00000011;
	TIMSK0 = 0b00000001;
	OCR0A =           6;
	OCR0B =         150;
	sei(); //habilita as interrupções
}