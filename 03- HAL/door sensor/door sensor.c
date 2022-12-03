/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022                                                                                                              */
/*  Discription : Door sensor							                                                                                  */
/******************************************************************************************************************************************/



#include "Types.h"
#include "Math.h"
#include "Macros.h"


#include "door sensor.h"


#include "GPIO_config.h"



void DoorSensor_u8Init(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	GPIO_voidSetPinDirection(Copy_u8PortName, Copy_u8BitNumber, INPUT, DIGITAL);

}

u8 DoorSensor_u8SensorRead(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	return GPIO_u8GetBit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);

}