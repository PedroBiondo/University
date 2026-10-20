# 2026-08-19-pull-down

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Leitura de um botão em PB0 com resistor pull-down externo: botão pressionado gera nível 1 e acende o LED em PB1; solto, o LED apaga. O bit é lido direto com `(PINB & (1 << botao)) >> botao`.
