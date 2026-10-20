/*
 * 2026-08-19-pull-up-sem-resistor.c
 *
 * Created: 19/08/2026 21:25:44
 * Author : Pedro Biondo Soares
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>

#define botao PB0                                // Criar variaveis desse jeito, facilita a leitura do codigo, mas consome memoria
#define led PB1

int entrada = 0;

int main(void)
{
	DDRB |= (1 << led);                          // Configura o pino PB1 como saída
	PORTB |= (1 << botao);						 // Configura o resistor interno de Pull Up do PB0
    while (1) 
    {
		entrada = (PINB & (1 << botao)) >>botao == 0; // Grava na variavel entrada 0 se o botão estiver solto ou 1 se o botão estiver acionado
		if(entrada) PORTB |= (1 << led);		 // Se verdadeiro liga a saída PB1
		else PORTB &= ~(1 << led);			     // Se falso desliga a saída PB1 
    }
}


