# 2026-08-19-pull-up

Programa em C para microcontrolador AVR (ATmega328P, 16 MHz), feito no Microchip Studio.

Leitura de um botão em PB0 com resistor pull-up externo. A lógica é invertida: o botão pressionado gera nível 0, e a comparação `== 0` faz o LED em PB1 acender.
