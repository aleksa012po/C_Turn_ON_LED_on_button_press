/*
 * init_ports_mcu.h
 *
 * Created: 21.11.2022. 23:21:50
 *  Author: user
 */ 

#pragma once

void init_ports_mcu()
{
	DDRB |= (1 << PORTB1);	// Output port
	PORTB |= (1 << PORTB1);
	
	DDRD &= (0 << PORTD2);	// Input port, iNT1 pin
	PORTD |= (1 << PORTD2);	// Pull Up resistor
	
	EIMSK = 0b00000001;		// INT0 interrupt
	
	sei();					// Enable interrupt
}