/*	Author: ngupt009
 *  Partner(s) Name: Surya Singh
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	
	unsigned char A0 = 0x00;
	
	while (1) {
		A0 = ~PINA & 0x01;
		if(A0){
			tempOut = 0x01;
		}
		else{
			tempOut = 0x00;
		}
		PORTC = tempOut;
	}
	return 1;
}
