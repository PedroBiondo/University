# 2026-08-26-timer0

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Pisca o LED em PB1 usando o Timer0 em modo normal, com prescaler 64 e interrupção de overflow (`TIMER0_OVF_vect`). A ISR conta 977 estouros (cerca de 1 segundo) e então inverte o LED.
