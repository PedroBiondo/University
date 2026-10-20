/*
 * 2026-08-26-invertBit.c
 *
 * Created: 26/08/2026 19:50:30
 * Author : Pedro Biondo Soares
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/delay.h> //esta biblioteca é responsavel pelo funcionamento do delay
                          
#define led PB1        // Criar variaveis desse jeito, facilita a leitura do codigo, mas consome memoria

#define lerBit(registrador, bit) ((registrador &= (1 << bit)) >> bit)
#define ligaBit(registrador, bit) (registrador |= (1 << bit)) // Configura o pino PB1 como saída
#define desligaBit(registrador, bit) (registrador &= ~(1 << bit)) // macro para desligar a saída
#define invertBit(registrador, bit) (registrador ^= ~(1 << ~bit))


int main(void)
{
	ligaBit(DDRB, led);                       // Configura o pino PB1 como saída, faz a função do DDRB
	while (1)
	{
		_delay_ms(1000);
		invertBit(PORTB, led);
	}
}
