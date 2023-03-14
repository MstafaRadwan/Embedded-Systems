/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 14 March 2022                                                                                                           */
/*  Discription : LED module							                                                                                  */
/******************************************************************************************************************************************/


#include "Types.h"
#include "Math.h"
#include "Macros.h"


#include "LED.h"

#include "GPIO_config.h"



void LED_voidInit(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	GPIO_voidSetPinDirection(Copy_u8PortName, Copy_u8BitNumber, OUTPUT, DIGITAL);

}



void LED_voidRun(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	
	GPIO_voidSetBitOpt(Copy_u8PortName, Copy_u8BitNumber);

}