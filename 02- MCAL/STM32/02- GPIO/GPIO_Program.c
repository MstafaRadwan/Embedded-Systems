#include "Types.h"
#include "BitMath.h"

#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"


void GPIO_voidSetPinDirrection(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8Mode) {
	switch (Copy_u8PortName) {
		case PortA: 
					if (Copy_u8PinNumber < 8)
					{
						/* code */
						GPIOA_CRL &= ~(0xF << (Copy_u8PinNumber * 4));
						GPIOA_CRL |= (Copy_u8Mode << (Copy_u8PinNumber * 4));
					}
					else if (Copy_u8PinNumber < 16)
					{
						/* code */
						Copy_u8PinNumber -= 8;
						GPIOA_CRH &= ~(0xF << (Copy_u8PinNumber * 4));
						GPIOA_CRH |= (Copy_u8Mode << (Copy_u8PinNumber * 4));
					}
					else {
						/*ERRRRRRRRRRRRRRRRRRRRRRRRRRRror*/
					}
					break;
		case PortB:
					if (Copy_u8PinNumber < 8)
					{
						/* code */
						GPIOB_CRL &= ~(0xF << (Copy_u8PinNumber * 4));
						GPIOB_CRL |= (Copy_u8Mode << (Copy_u8PinNumber * 4));
					}
					else if (Copy_u8PinNumber < 16)
					{
						/* code */
						Copy_u8PinNumber -= 8;
						GPIOB_CRH &= ~(0xF << (Copy_u8PinNumber * 4));
						GPIOB_CRH |= (Copy_u8Mode << (Copy_u8PinNumber * 4));
					}
					else {
						/*ERRRRRRRRRRRRRRRRRRRRRRRRRRRror*/
					}
					break;
		case PortC:
					if (Copy_u8PinNumber < 8)
					{
						/* code */
						Copy_u8PinNumber -= 8;
						GPIOC_CRL &= ~(0xF << (Copy_u8PinNumber * 4));
						GPIOC_CRL |= (Copy_u8Mode << (Copy_u8PinNumber * 4));
					}
					else if (Copy_u8PinNumber < 16)
					{
						/* code */
						GPIOC_CRH &= ~(0xF << (Copy_u8PinNumber * 4));
						GPIOC_CRH |= (Copy_u8Mode << (Copy_u8PinNumber * 4));
					}
					else {
						/*ERRRRRRRRRRRRRRRRRRRRRRRRRRRror*/
					}
					break;
	}
}


void GPIO_voidSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8BitValue) {
	switch (Copy_u8PortName) {
		case PortA: 
					if (Copy_u8BitValue == HIGH)
					{
						/* code */
						setBit(GPIOA_ODR, Copy_u8PinNumber);
					}
					else if (Copy_u8BitValue == LOW)
					{
						/* code */
						clrBit(GPIOA_ODR, Copy_u8PinNumber);
					}
					else {
						/*ERRRRRRRRRRRRRRRRRRRRRRRRRRRror*/
					}
					break;
		case PortB:
					if (Copy_u8BitValue == HIGH)
					{
						/* code */
						setBit(GPIOA_ODR, Copy_u8PinNumber);
					}
					else if (Copy_u8BitValue == LOW)
					{
						/* code */
						clrBit(GPIOA_ODR, Copy_u8PinNumber);
					}
					else {
						/*ERRRRRRRRRRRRRRRRRRRRRRRRRRRror*/
					}
					break;
		case PortC:
					if (Copy_u8BitValue == HIGH)
					{
						/* code */
						setBit(GPIOA_ODR, Copy_u8PinNumber);
					}
					else if (Copy_u8BitValue == LOW)
					{
						/* code */
						clrBit(GPIOA_ODR, Copy_u8PinNumber);
					}
					else {
						/*ERRRRRRRRRRRRRRRRRRRRRRRRRRRror*/
					}
					break;
	}
}


u8 GPIO_u8GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber) {
	u8 Copy_u8retrnValue = 0;
	switch (Copy_u8PortName) {
		case PortA: 
					Copy_u8retrnValue = getValue(GPIOA_IDR, Copy_u8PinNumber);
					break;
		case PortB:
					Copy_u8retrnValue = getValue(GPIOB_IDR, Copy_u8PinNumber);
					break;
		case PortC:
					Copy_u8retrnValue = getValue(GPIOC_IDR, Copy_u8PinNumber);
					break;
	}
	return Copy_u8retrnValue;
}







//void GPIO_voidBitConfig(u8 Copy_PortName, u8 Copy_PinNumber, u8 Copy_BitType, u8 Copy_BitState) {
//	switch (Copy_PortName) {
//		case PortA:
//					if (Copy_BitType > 15) {
//						/* code */
//						Copy_PinNumber < 8 ? GPIOA_CRL |= (0b1000 << Copy_PinNumber): GPIOA_CRH |= (0b1000 << (Copy_PinNumber -  0b1000));
//						if (Copy_BitType == 0x10)
//							GPIOA_ODR &= ~(1 << Copy_PinNumber);
//						else if (Copy_BitType == 0x11)
//							GPIOA_ODR |= (1 << Copy_PinNumber);
//						else {
//							/*Errrrrrrrrrrrrrrrrrrror*/
//						}
//					}
//					else {
//						Copy_PinNumber < 8 ? GPIOA_CRL |= (Copy_BitType << Copy_PinNumber): GPIOA_CRH |= (Copy_BitType << (Copy_PinNumber -  0b1000));
//						if (Copy_BitType == 0b0100 || Copy_BitType == 0x0)
//						{
//							/* code of input*/
//						}
//						else if (Copy_BitState == 1)
//						{
//							/* code */
//							GPIOA_ODR |= (1 << Copy_PinNumber);
//						}
//						else if (Copy_BitState == 0)
//						{
//							/* code */
//							GPIOA_ODR &= ~(1 << Copy_PinNumber);
//						}
//						else {
//							/*Errrrrrrrrrrrrrrrrrrror*/
//						}
//					}
//					break;
//		case PortB:
//					if (Copy_BitType > 15) {
//						/* code */
//						Copy_PinNumber < 8 ? GPIOB_CRL |= (0b1000 << Copy_PinNumber): GPIOB_CRH |= (0b1000 << (Copy_PinNumber -  0b1000));
//						if (Copy_BitType == 0x10)
//							GPIOB_ODR &= ~(1 << Copy_PinNumber);
//						else if (Copy_BitType == 0x11)
//							GPIOB_ODR |= (1 << Copy_PinNumber);
//						else {
//							/*Errrrrrrrrrrrrrrrrrrror*/
//						}
//					}
//					else {
//						Copy_PinNumber < 8 ? GPIOB_CRL |= (Copy_BitType << Copy_PinNumber): GPIOB_CRH |= (Copy_BitType << (Copy_PinNumber -  0b1000));
//						if (Copy_BitType == 0b0100 || Copy_BitType == 0x0)
//						{
//							/* code of input*/
//						}
//						else if (Copy_BitState == 1)
//						{
//							/* code */
//							GPIOB_ODR |= (1 << Copy_PinNumber);
//						}
//						else if (Copy_BitState == 0)
//						{
//							/* code */
//							GPIOB_ODR &= ~(1 << Copy_PinNumber);
//						}
//						else {
//							/*Errrrrrrrrrrrrrrrrrrror*/
//						}
//					}
//					break;
//		case PortC:
//					if (Copy_BitType > 15) {
//						/* code */
//						Copy_PinNumber < 8 ? GPIOC_CRL |= (0b1000 << Copy_PinNumber): GPIOC_CRH |= (0b1000 << (Copy_PinNumber -  0b1000));
//						if (Copy_BitType == 0x10)
//							GPIOC_ODR &= ~(1 << Copy_PinNumber);
//						else if (Copy_BitType == 0x11)
//							GPIOC_ODR |= (1 << Copy_PinNumber);
//						else {
//							/*Errrrrrrrrrrrrrrrrrrror*/
//						}
//					}
//					else {
//						Copy_PinNumber < 8 ? GPIOC_CRL |= (Copy_BitType << Copy_PinNumber): GPIOC_CRH |= (Copy_BitType << (Copy_PinNumber -  0b1000));
//						if (Copy_BitType == 0b0100 || Copy_BitType == 0x0)
//						{
//							/* code of input*/
//						}
//						else if (Copy_BitState == 1)
//						{
//							/* code */
//							GPIOC_ODR |= (1 << Copy_PinNumber);
//						}
//						else if (Copy_BitState == 0)
//						{
//							/* code */
//							GPIOC_ODR &= ~(1 << Copy_PinNumber);
//						}
//						else {
//							/*Errrrrrrrrrrrrrrrrrrror*/
//						}
//					}
//					break;
//	}
//}
