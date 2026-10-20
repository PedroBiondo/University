/*
 * 2026-08-26-ligaBit.c
 *
 * Created: 26/08/2026 19:17:42
 * Author : Pedro Biondo Soares
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>

#define botao PB0                                // Criar variaveis desse jeito, facilita a leitura do codigo, mas consome memoria
#define led PB1

#define lerBit  (registrador, bit) ((registrador &= (1 << bit)) >> bit)
#define ligaBit (registrador, bit) (registrador |= (1 << bit)) // Configura o pino PB1 como saída

int entrada = 0;

int main(void)
{
	ligaBit(DDRB, led);                       // Configura o pino PB1 como saída, faz a função do DDRB
	while (1)
	{
		entrada = lerBit(PINB, botao);        // Grava na variavel entrada 0 se o botão estiver solto ou 1 se o botão estiver acionado
		if(entrada) PORTB |= (1 << led);      // Se verdadeiro liga a saída PB1
		else PORTB &= ~(1 << led);		      // Se falso desliga a saída PB1
	}
}
