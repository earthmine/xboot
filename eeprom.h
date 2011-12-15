/************************************************************************/
/* XMEGA EEPROM Driver                                                  */
/*                                                                      */
/* eeprom.h                                                             */
/*                                                                      */
/* Alex Forencich <alex@alexforencich.com>                              */
/*                                                                      */
/* Copyright (c) 2011 Alex Forencich                                    */
/*                                                                      */
/* Permission is hereby granted, free of charge, to any person          */
/* obtaining a copy of this software and associated documentation       */
/* files(the "Software"), to deal in the Software without restriction,  */
/* including without limitation the rights to use, copy, modify, merge, */
/* publish, distribute, sublicense, and/or sell copies of the Software, */
/* and to permit persons to whom the Software is furnished to do so,    */
/* subject to the following conditions:                                 */
/*                                                                      */
/* The above copyright notice and this permission notice shall be       */
/* included in all copies or substantial portions of the Software.      */
/*                                                                      */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF   */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND                */
/* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS  */
/* BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN   */
/* ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN    */
/* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE     */
/* SOFTWARE.                                                            */
/*                                                                      */
/************************************************************************/

#ifndef __EEPROM_H
#define __EEPROM_H

#include <avr/io.h>
#include <avr/interrupt.h>

#include <stdio.h>

#include "xboot.h"

#ifndef EEPROM_PAGE_SIZE
#define EEPROM_PAGE_SIZE 32
#endif

// AVR1008 fix
//#define USE_AVR1008_EEPROM

// Prototypes
uint8_t eeprom_read_byte(uint16_t addr);
void eeprom_write_byte(uint16_t addr, uint8_t byte);
uint16_t eeprom_read_block(uint16_t addr, uint8_t *dest, uint16_t len);
uint16_t eeprom_write_block(uint16_t addr, const uint8_t *src, uint16_t len);

void eeprom_erase_page(uint16_t addr);
void eeprom_erase_all(void);



#endif // __EEPROM_H



