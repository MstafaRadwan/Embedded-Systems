/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022                                                                                                              */
/*  Discription : Door sensor							                                                                                  */
/******************************************************************************************************************************************/


#ifndef DOOR_SENSOR_H
#define DOOR_SENSOR_H


void DoorSensor_voidInit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);
u8 DoorSensor_u8SensorRead(u8 Copy_u8PortName, u8 Copy_u8BitNumber);


#endif