# 2026-09-02-timerPWM

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

PWM rápido (Fast PWM) do Timer0 no pino PD6 (OC0A). A cada 1 segundo o duty cycle (`OCR0A`) aumenta em 49, variando o brilho do LED em degraus. Ao passar de 246, volta ao valor inicial 6. O `TCNT0 = 6` é recarregado a cada overflow.
