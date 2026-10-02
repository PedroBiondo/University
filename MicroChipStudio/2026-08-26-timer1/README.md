# 2026-08-26-timer1

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Pisca o LED em PB1 usando o Timer0 em modo CTC, com prescaler 64 e `OCR0A = 249`, o que gera uma interrupção de comparação (`TIMER0_COMPA_vect`) a cada 1 ms. A ISR conta 1000 vezes e inverte o LED a cada 1 segundo.
