#ifndef _GPIO_CONFIG_H
#define _GPIO_CONFIG_H

#include "Types.h"


#define CHOOSE_YOUR_PIN_DIGITAL_OR_NOT							DIGITAL

void GPIO_voidSetPinDirection(u8 Copy_u8PortName, u8 Copy_u8BitNumber, u8 Copy_u8BitDirection, u8 Copy_u8DigitalOrNot);

void GPIO_voidSetBit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);

void GPIO_voidSetBitOpt(u8 Copy_u8PortName, u8 Copy_u8BitNumber);

void GPIO_voidTougleBit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);

void GPIO_voidClearBit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);

u8 GPIO_u8GetBit(u8 Copy_u8PortName, u8 Copy_u8BitNumber);

void GPIO_voidAlternativeFuncSelect(u8 Copy_u8PortName, u8 Copy_u8BitNumber);



#endif
