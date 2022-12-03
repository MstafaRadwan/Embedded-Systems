#include "Types.h"
#include "BitMath.h"


#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

#include "SC_config.h"
#include "GPIO_interface.h"
#include "GPIO_config.h"







void ADC_voidInit(u8 Copy_u8pinNumber) {

	switch (Copy_u8pinNumber) {

		case AIN0:
					SC_voidGPIOInit(E);
					GPIO_voidAlternativeFuncSelect(E, 3);
					GPIO_voidSetPinDirection(E, 3, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(E, 3);

				break;

		case AIN1:
					SC_voidGPIOInit(E);
					GPIO_voidAlternativeFuncSelect(E, 2);
					GPIO_voidSetPinDirection(E, 2, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(E, 2);

				break;

		case AIN2:
					SC_voidGPIOInit(E);
					GPIO_voidAlternativeFuncSelect(E, 1);
					GPIO_voidSetPinDirection(E, 1, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(E, 1);

				break;

		case AIN3:
					SC_voidGPIOInit(E);
					GPIO_voidAlternativeFuncSelect(E, 0);
					GPIO_voidSetPinDirection(E, 0, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(E, 0);

				break;

		case AIN4:
					SC_voidGPIOInit(D);
					GPIO_voidAlternativeFuncSelect(D, 3);
					GPIO_voidSetPinDirection(D, 3, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(D, 3);

				break;

		case AIN5:
					SC_voidGPIOInit(D);
					GPIO_voidAlternativeFuncSelect(D, 2);
					GPIO_voidSetPinDirection(D, 2, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(D, 2);

				break;

		case AIN6:
					SC_voidGPIOInit(D);
					GPIO_voidAlternativeFuncSelect(D, 1);
					GPIO_voidSetPinDirection(D, 1, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(D, 1);

				break;

		case AIN7:
					SC_voidGPIOInit(D);
					GPIO_voidAlternativeFuncSelect(D, 0);
					GPIO_voidSetPinDirection(D, 0, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(D, 0);

				break;

		case AIN8:
					SC_voidGPIOInit(E);
					GPIO_voidAlternativeFuncSelect(E, 5);
					GPIO_voidSetPinDirection(E, 5, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(E, 5);

				break;

		case AIN9:
					SC_voidGPIOInit(E);
					GPIO_voidAlternativeFuncSelect(E, 4);
					GPIO_voidSetPinDirection(E, 4, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(E, 4);

				break;

		case AIN10:
					SC_voidGPIOInit(B);
					GPIO_voidAlternativeFuncSelect(B, 4);
					GPIO_voidSetPinDirection(B, 4, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(B, 4);

				break;

		case AIN11:
					SC_voidGPIOInit(B);
					GPIO_voidAlternativeFuncSelect(B, 5);
					GPIO_voidSetPinDirection(B, 5, INPUT, ANALOG);
					GPIO_voidAnalogModeSelect(B, 5);

				break;
	}
}

u8 ADC_u8GetValue(u8 Copy_u8pinNumber) {


	
}

