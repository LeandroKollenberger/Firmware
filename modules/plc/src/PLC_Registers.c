/*------------------------------------------------------------------------

Copyright © 2012-2014 Eric Nicolás Pernia.
Copyright © 2015 Eric Nicolás Pernia.
Copyright © 2015 Leandro Kollenberger.
All rights reserved.

This file is part of IDE4PLC Firmware. http://ide4plc.wordpress.com

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

 * Redistributions of source code and project files must retain the above 
   copyright notice, this list of conditions and the following disclaimer.
  
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

 * Neither the name of the copyright holders nor the names of its contributors
   may be used to endorse or promote products derived from this product without
   specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
OF THE POSSIBILITY OF SUCH DAMAGE.

------------------------------------------------------------------------*/
/*
 * PLC_Registers.c
 *
 *  Created on: 2012/02/04
 *      Author: Eric Pernia
 */


#include "PLC_Registers.h"
	/* Global variables */

	PLC_SymbolicRegister CR; 	// CURRENT RESULT REGISTER - GLOBAL VARIABLE DECLARATION
/*-----------------------------------------------------------*/
/*
uint8_t Convert_PLC_Digital_PORT_8_2_Uint8_t(PLC_Digital_PORT_8 PORTx)
{
	uint8_t status = 0;

	if (PORTx.b0 != 0)
		{status |= bit_0;}
	if (PORTx.b1 != 0)
		{status |= bit_1;}
	if (PORTx.b2 != 0)
		{status |= bit_2;}
	if (PORTx.b3 != 0)
		{status |= bit_3;}
	if (PORTx.b4 != 0)
		{status |= bit_4;}
	if (PORTx.b5 != 0)
		{status |= bit_5;}
	if (PORTx.b6 != 0)
		{status |= bit_6;}
	if (PORTx.b7 != 0)
		{status |= bit_7;}

    return status;
}*/

/*-----------------------------------------------------------*/
/*
PLC_Digital_PORT_8 Convert_Uint8_t_2_PLC_Digital_PORT_8(uint8_t status)
{
	PLC_Digital_PORT_8 PORTx;

	PORTx.x0 = 0;
	PORTx.x1 = 0;
	PORTx.x2 = 0;
	PORTx.x3 = 0;
	PORTx.x4 = 0;
	PORTx.x5 = 0;
	PORTx.x6 = 0;
	PORTx.x7 = 0;

	if ((status & bit_0) != 0)
		{PORTx.x0 = 1;}
	if ((status & bit_1) != 0)
		{PORTx.x1 = 1;}
	if ((status & bit_2) != 0)
		{PORTx.x2 = 1;}
	if ((status & bit_3) != 0)
		{PORTx.x3 = 1;}
	if ((status & bit_4) != 0)
		{PORTx.x4 = 1;}
	if ((status & bit_5) != 0)
		{PORTx.x5 = 1;}
	if ((status & bit_6) != 0)
		{PORTx.x6 = 1;}
	if ((status & bit_7) != 0)
		{PORTx.x7 = 1;}

    return PORTx;
}*/

/*-----------------------------------------------------------*/

// A.X.x0;	// Accedo a un bit del byte A
// A.B.b0;	// Accedo al byte completo A

/*-----------------------------------------------------------*/

PLC_BYTE Convert_PLC_1ByteRegister_2_PLC_BYTE(PLC_1ByteRegister PORT)
{
	PLC_BYTE status = 0;

	if (PORT.X.x0)
		{status |= bit_0;}
	if (PORT.X.x1 != 0)
		{status |= bit_1;}
	if (PORT.X.x2)
		{status |= bit_2;}
	if (PORT.X.x3)
		{status |= bit_3;}
	if (PORT.X.x4)
		{status |= bit_4;}
	if (PORT.X.x5)
		{status |= bit_5;}
	if (PORT.X.x6)
		{status |= bit_6;}
	if (PORT.X.x7)
		{status |= bit_7;}

    return status;
}

/*-----------------------------------------------------------*/


PLC_1ByteRegister Convert_PLC_BYTE_2_PLC_1ByteRegister(PLC_BYTE status)
{
	PLC_1ByteRegister PORT;

	PORT.X.x0 = 0;
	PORT.X.x1 = 0;
	PORT.X.x2 = 0;
	PORT.X.x3 = 0;
	PORT.X.x4 = 0;
	PORT.X.x5 = 0;
	PORT.X.x6 = 0;
	PORT.X.x7 = 0;

	if ((status & bit_0))
		{PORT.X.x0 = 1;}
	if ((status & bit_1))
		{PORT.X.x1 = 1;}
	if ((status & bit_2))
		{PORT.X.x2 = 1;}
	if ((status & bit_3))
		{PORT.X.x3 = 1;}
	if ((status & bit_4))
		{PORT.X.x4 = 1;}
	if ((status & bit_5))
		{PORT.X.x5 = 1;}
	if ((status & bit_6))
		{PORT.X.x6 = 1;}
	if ((status & bit_7))
		{PORT.X.x7 = 1;}

    return PORT;
}

/*-----------------------------------------------------------*/


/*
void Reset_PLC_CPU_Reg_StatusWord(volatile PLC_CPU_Reg_StatusWord *pxStatusWord)
{
	pxStatusWord->ER = 0;
	pxStatusWord->RLO = 0;
	pxStatusWord->STA = 0;
	pxStatusWord->OR = 0;
	pxStatusWord->OS = 0;
	pxStatusWord->OV = 0;
	pxStatusWord->A0 = 0;
	pxStatusWord->A1 = 0;
	pxStatusWord->RB = 0;
}
*/
