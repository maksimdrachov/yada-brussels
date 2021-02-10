/*
 * MY9221.h
 *
 * Defines necessary functions to control a MY9221 LED driver
 *
 *  Created on: 08 Feb 2021
 *      Author: Maksim Drachov
 */

#ifndef INC_MY9221_H_
#define INC_MY9221_H_

void CMDArray_Init(int *, int, int, int, int, int, int, int, int);
void Grayscale_Init(int *, int, int *);
void InputArray_Init(int *, int *, int *);

#endif /* INC_MY9221_H_ */
