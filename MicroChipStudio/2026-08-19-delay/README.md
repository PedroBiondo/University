# 2026-08-19-delay

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Pisca um LED ligado em PB1 a cada 1 segundo. Usa `_delay_ms(1000)` da biblioteca de delay e inverte o estado do pino com o operador XOR (`PORTB ^= (1 << led)`).
