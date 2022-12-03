/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022                                                                                                              */
/*  Discription : Light switch							                                                                                  */
/******************************************************************************************************************************************/


#ifndef LIGHT_SWITCH_H
#define LIGHT_SWITCH_H



void LightSwitch_voidInit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);
u8 LightSwitch_u8SensorRead(u8 Copy_u8PortName, u8 Copy_u8BitNumber);


#endif