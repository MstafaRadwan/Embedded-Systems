/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022                                                                                                              */
/*  Discription : Speed Sensor							                                                                                  */
/******************************************************************************************************************************************/



#include "Types.h"
#include "Math.h"
#include "Macros.h"


#include "door sensor.h"


#include "ADC_config.h"



void SpeedSensor_voidInit(u8 Copy_u8BitNumber) {

	ADC_voidInit(Copy_u8BitNumber);

}


u16 SpeedSensor_u16SensorRead(u8 Copy_u8BitNumber) {

	return ADC_u16AnalogRead(u8 Copy_u8BitNumber);

}