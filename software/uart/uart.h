/*
 * uart.h
 *
 *  Created on: July 1, 2019
 *      Author: Marcos Vinícius Leal da Silva e
 *      Modified: Daniel Pereira
 *
 *      Instituto Federal de Santa Catarina
 *
 * UART functions
 *  - write
 *  - setup
 *	- read
 *	- (...)
 *
 */


#ifndef __UART_H
#define __UART_H

#include <stdint.h>

void UART_write(int character);
void UART_setup(int baud, int parity);
void UART_interrupt_enable(void);
uint8_t UART_read(void);

#define UART_TX              *(&UART_BASE_ADDRESS)
#define UART_RX              *(&UART_BASE_ADDRESS + 1)
#define UART_SETUP           *(&UART_BASE_ADDRESS + 2)


#endif // __UART_H
