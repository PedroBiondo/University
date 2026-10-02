# 2026-08-19-pull-up-sem-resistor

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Igual ao projeto pull-up, mas usa o resistor de pull-up interno do microcontrolador, ativado com `PORTB |= (1 << botao)`. Assim o botão funciona sem resistor externo. Pressionado, acende o LED em PB1.
