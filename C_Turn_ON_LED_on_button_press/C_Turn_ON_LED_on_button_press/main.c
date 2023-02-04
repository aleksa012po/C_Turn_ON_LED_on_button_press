/*
 * C_Turn_ON_LED_on_button_press.c
 *
 * Created: 20.11.2022. 23:21:58
 * Author : Aleksandar Bogdanovic
 */ 
// PD2 is an input button, PB1 is an output to LED

#DEFINE F_CPU 16000000	  // Clock at 16MHz

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "init_ports_mcu.h"


#define DEBOUNCE_TIME 200 // time to wait while "de-bouncing" button 


int main(void)
{
init_ports_mcu();
  
  while(1)					//infinite loop
  {
	  //
  } 
}

ISR(INT0_vect) 
{
	PORTB ^= (1 << PORTB1);	
	_delay_ms(DEBOUNCE_TIME);
}