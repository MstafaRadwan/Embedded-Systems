/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022                                                                                                              */
/*  Discription : right light							                                                                                  */
/******************************************************************************************************************************************/


#include "Types.h"
#include "Math.h"
#include "Macros.h"


#include "buzzer.h"

#include "GPIO_config.h"





void RightLight_voidInit(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {


	GPIO_voidSetPinDirection(Copy_u8PortName, Copy_u8BitNumber, OUTPUT, DIGITAL);

}




void RightLight_voidRun(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	
	GPIO_voidSetBitOpt(Copy_u8PortName, Copy_u8BitNumber);


}