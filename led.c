#include <avr/io.h>
#include "led.h"

void LED_init() {
	DDRB |= (1 << PB1);
	DDRD |= (1 << PORTD6);
}
