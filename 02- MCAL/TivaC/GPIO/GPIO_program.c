#include "Types.h"
#include "BitMath.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

#include "SC_config.h"
#include "SC_interface.h"



void GPIO_voidSetPinDirection(u8 Copy_u8PortName, u8 Copy_u8BitNumber, u8 Copy_u32BitDirection, u8 Copy_u32DigitalOrNot) {
	switch (Copy_u8PortName) {
		
		case A:
                                
                                SC_voidGPIOInit(A);
				#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
                                        
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTA_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTA_AHB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTA_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTA_AHB, Copy_u8BitNumber);
					}
				#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTA_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTA_APB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTA_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTA_APB, Copy_u8BitNumber);
					}
				#endif
				
			break ;
		case B:
                  
                                SC_voidGPIOInit(B);
				#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTB_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTB_AHB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTB_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTB_AHB, Copy_u8BitNumber);
					}
				#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTB_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTB_APB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTB_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTB_APB, Copy_u8BitNumber);
					}
				#endif
			break ;
		case C:
                  
                                SC_voidGPIOInit(C);
				#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTC_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTC_AHB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTC_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTC_AHB, Copy_u8BitNumber);
					}
				#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTC_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTC_APB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTC_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTC_APB, Copy_u8BitNumber);
					}
				#endif
			break ;
		case D:
                  
                                SC_voidGPIOInit(D);
				#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTD_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTD_AHB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTD_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTD_AHB, Copy_u8BitNumber);
					}
				#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTD_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTD_APB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTD_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTD_APB, Copy_u8BitNumber);
					}
				#endif
			break ;
		case E:
                      
                                SC_voidGPIOInit(E);
				#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTE_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTE_AHB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTE_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTE_AHB, Copy_u8BitNumber);
					}
				#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTE_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTE_APB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTE_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTE_APB, Copy_u8BitNumber);
					}
				#endif
			break ;
		case F:
                      
                                SC_voidGPIOInit(F);
				#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTF_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTF_AHB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTF_AHB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTF_AHB, Copy_u8BitNumber);
					}
				#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
					if (Copy_u32BitDirection) {
						setBit(GPIO_DIRECTION_PORTF_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIRECTION_PORTF_APB, Copy_u8BitNumber);
					}

					if (Copy_u32DigitalOrNot){
						setBit(GPIO_DIGITAL_ENABLE_PORTF_APB, Copy_u8BitNumber);
					}
					else {
						clrBit(GPIO_DIGITAL_ENABLE_PORTF_APB, Copy_u8BitNumber);
					}
				#endif
			break ;	
	}
	
}


void GPIO_voidAnalogModeSelect(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	if (Copy_u8PortName == A) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAMSEL_PORTA_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAMSEL_PORTA_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == B) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAMSEL_PORTB_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAMSEL_PORTB_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == C) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAMSEL_PORTC_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAMSEL_PORTC_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == D) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAMSEL_PORTD_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAMSEL_PORTD_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == E) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAMSEL_PORTE_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAMSEL_PORTE_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == F) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAMSEL_PORTF_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAMSEL_PORTF_APB, Copy_u8BitNumber);
		#endif
	}
	else {
	//	#error
	}

}

void GPIO_voidSetBit(u8 Copy_u8PortName, u8 Copy_u8BitValue) {
	if (Copy_u8PortName == A) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(*GPIO_DATA_PORTA_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTA_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == B) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(*GPIO_DATA_PORTB_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTB_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == C) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(*GPIO_DATA_PORTC_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTC_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == D) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(*GPIO_DATA_PORTD_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTD_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == E) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(*GPIO_DATA_PORTE_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTE_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == F) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(*GPIO_DATA_PORTF_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTF_APB, Copy_u8BitValue);
		#endif
	}
	else {
	//	#error
	}
}


void GPIO_voidTougleBit(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {
		
	if (Copy_u8PortName == A) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			toggleBit(*GPIO_DATA_PORTA_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			toggleBit(*GPIO_DATA_PORTA_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == B) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			toggleBit(*GPIO_DATA_PORTB_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(*GPIO_DATA_PORTB_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == C) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			toggleBit(*GPIO_DATA_PORTC_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			toggleBit(*GPIO_DATA_PORTC_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == D) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			toggleBit(*GPIO_DATA_PORTD_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			toggleBit(*GPIO_DATA_PORTD_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == E) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			toggleBit(*GPIO_DATA_PORTE_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			toggleBit(*GPIO_DATA_PORTE_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == F) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			toggleBit(*GPIO_DATA_PORTF_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			toggleBit(*GPIO_DATA_PORTF_APB, Copy_u8BitNumber);
		#endif
	}
	else {
	//	#error
	}
	
}


void GPIO_voidSetBitOpt(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {
	if (Copy_u8PortName == A) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			*(GPIO_DATA_PORTA_AHB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			*(GPIO_DATA_PORTA_APB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#endif
	}
	else if (Copy_u8PortName == B) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			*(GPIO_DATA_PORTB_AHB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			*(GPIO_DATA_PORTB_APB + (1 << 2 + Copy_u8BitNumber)) = 0x1;
		#endif
	}
	else if (Copy_u8PortName == C) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			*(GPIO_DATA_PORTC_AHB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			*(GPIO_DATA_PORTC_APB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#endif
	}
	else if (Copy_u8PortName == D) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			*(GPIO_DATA_PORTD_AHB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			*(GPIO_DATA_PORTD_APB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#endif
	}
	else if (Copy_u8PortName == E) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			*(GPIO_DATA_PORTE_AHB + (1 << (2 + Copy_u8BitNumber))) = Copy_u8BitNumber;
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			*(GPIO_DATA_PORTE_APB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#endif
	}
	else if (Copy_u8PortName == F) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			*(GPIO_DATA_PORTF_AHB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			*(GPIO_DATA_PORTF_APB + (1 << (2 + Copy_u8BitNumber))) = 0x1;
		#endif
	}
	else {
	//	#error
	}
}

void GPIO_voidClearBit(u8 Copy_u8PortName, u8 Copy_u8BitValue) {
	if (Copy_u8PortName == A) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			clrBit(*GPIO_DATA_PORTA_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			clrBit(*GPIO_DATA_PORTA_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == B) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			clrBit(*GPIO_DATA_PORTB_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			clrBit(*GPIO_DATA_PORTB_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == C) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			clrBit(*GPIO_DATA_PORTC_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			clrBit(*GPIO_DATA_PORTC_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == D) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			clrBit(*GPIO_DATA_PORTD_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			clrBit(*GPIO_DATA_PORTD_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == E) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			clrBit(*GPIO_DATA_PORTE_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			clrBit(*GPIO_DATA_PORTE_APB, Copy_u8BitValue);
		#endif
	}
	else if (Copy_u8PortName == F) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			clrBit(*GPIO_DATA_PORTF_AHB, Copy_u8BitValue);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			clrBit(*GPIO_DATA_PORTF_APB, Copy_u8BitValue);
		#endif
	}
	else {
	//	#error
	}
}


void GPIO_voidAlternativeFuncSelect(u8 Copy_u8PortName, u8 Copy_u8BitNumber) {

	if (Copy_u8PortName == A) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAFSE_PORTA_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAFSE_PORTA_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == B) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAFSE_PORTB_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAFSE_PORTB_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == C) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAFSE_PORTC_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAFSE_PORTC_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == D) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAFSE_PORTD_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAFSE_PORTD_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == E) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAFSE_PORTE_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAFSE_PORTE_APB, Copy_u8BitNumber);
		#endif
	}
	else if (Copy_u8PortName == F) {
		#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
			setBit(GPIOAFSE_PORTF_AHB, Copy_u8BitNumber);
		#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
			setBit(GPIOAFSE_PORTF_APB, Copy_u8BitNumber);
		#endif
	}
	else {
	//	#error
	}

}

/*
void GPIO_voidSetPortValue(u8 Copy_u8PortName, u8 Copy_u8PortValue) {
	switch (Copy_u8PortName) {			
		case A:

			#if YOUR_GPIO_PERIPHERAL == GPIO_USING_AHB
				*localPointer = GPIO_DATA_PORTA_AHB + Copy_u8PortValue;
			#elif YOUR_GPIO_PERIPHERAL == GPIO_USING_APB
				GPIO_DATA_PORTA_APB = Copy_u8BitValue;
			#endif

 			break;
 		case B:
 			break;
 		case C:
 			break;
 		case D:
 			break;
 		case E:
 			break;
 		case F:
 			break;
 	}
}
*/
