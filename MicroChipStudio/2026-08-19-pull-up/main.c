/*
 * 2026-08-19-pull-up.c
 *
 * Created: 19/08/2026 21:13:58
 * Author : Pedro Biondo Soares
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>

#define botao PB0                                // Criar variaveis desse jeito, facilita a leitura do codigo, mas consome memoria
#define led PB1

int entrada = 0;

int main(void)
{
	DDRB|= (1 << DDB1);                          // Configura o pino PB1 como saída
    while (1) 
    {
		entrada = (PINB & (1 << botao)) >>botao == 0; // Grava na variavel entrada 0 se o botão estiver solto ou 1 se o botão estiver acionado
		if(entrada) PORTB |= (1 << led);		 // Se verdadeiro liga a saída PB1
		else PORTB &= ~(1 << led);			     // Se falso desliga a saída PB1 
    }
}

