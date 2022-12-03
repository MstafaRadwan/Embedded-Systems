/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022                                                                                                              */
/*  Discription : left light							                                                                                  */
/******************************************************************************************************************************************/


#include "Types.h"
#include "Math.h"
#include "Macros.h"


#include "left light.h"

#include "GPIO_config.h"



void leftLight_voidInit(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	GPIO_voidSetPinDirection(Copy_u8PortName, Copy_u8BitNumber, OUTPUT, DIGITAL);


}



void leftLight_voidRun(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	
	GPIO_voidSetBitOpt(Copy_u8PortName, Copy_u8BitNumber);


}