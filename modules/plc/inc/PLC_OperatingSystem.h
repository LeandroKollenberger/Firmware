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
 * PLC_OperatingSystem.h
 *
 *  Created on: 2012/02/04
 *      Author: Eric Pernia
 */

#ifndef PLC_OPERATING_SYSTEM_H_
	#define PLC_OPERATING_SYSTEM_H_

	/* FreeRTOS.org includes. */
	//#include "FreeRTOS.h"
	//#include "FreeRTOSConfig.h"
	//#include "task.h"
	//#include "basic_io.h"	// Para enviar datos a la consola. Viene de los Ejemplos de FreeRTOS

	// PLC Task Create Macro
	//#define PLC_TaskCreate( pvTaskCode, pcName, usStackDepth, pvParameters, uxPriority, pxCreatedTask ) xTaskCreate( ( pvTaskCode ), ( pcName ), ( usStackDepth ), ( pvParameters ), ( uxPriority ), ( pxCreatedTask ) )

	#include "os.h"               /* <= operating system header */
	#include "ciaak.h"            /* <= ciaa kernel header */

	// Function prototypes
	//void PLC_TaskStartScheduler( void );


#endif /* PLC_OPERATING_SYSTEM_H_ */
