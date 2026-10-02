# 2026-09-02-timer2

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Pisca o LED em PB1 com o Timer0 em modo normal e prescaler 64. A cada overflow carrega `TCNT0 = 6` para que o estouro ocorra a cada 1 ms. A ISR conta 2000 estouros e inverte o LED a cada 2 segundos.
