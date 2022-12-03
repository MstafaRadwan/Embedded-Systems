#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H


#define HIGH												1
#define LOW													0


#define PortA 												0
#define PortB 												1
#define PortC 												2

void GPIO_voidSetPinDirrection(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8Mode);
void GPIO_voidSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8BitValue);
u8 GPIO_u8GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber);



#define GeneralPurposeOutput_PushBull_SpeedUpTo10MHZ		0b0001
#define GeneralPurposeOutput_OpenDrain_SpeedUpTo10MHZ   	0b0101
#define AlternateFunctionOutput_PushPull_SpeedUpTo10MHZ		0b1001
#define AlternateFunctionOutput_OpenDrain_SpeedUpTo10MHZ	0b1101

#define GeneralPurposeOutput_PushBull_SpeedUpTo2MHZ			0b0010
#define GeneralPurposeOutput_OpenDrain_SpeedUpTo2MHZ   		0b0110
#define AlternateFunctionOutput_PushPull_SpeedUpTo2MHZ		0b1010
#define AlternateFunctionOutput_OpenDrain_SpeedUpTo2MHZ		0b1110

#define GeneralPurposeOutput_PushBull_SpeedUpTo50MHZ		0b0011
#define GeneralPurposeOutput_OpenDrain_SpeedUpTo50MHZ   	0b0111
#define AlternateFunctionOutput_PushPull_SpeedUpTo50MHZ		0b1011
#define AlternateFunctionOutput_OpenDrain_SpeedUpTo50MHZ	0b1111


#define Input_Analog										0b0000
#define Input_Floating										0b0100
#define Input_PullDown 										0b10000
#define Input_PullUp										0b10001



#endif