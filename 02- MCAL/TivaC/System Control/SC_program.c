#include "Types.h"
#include "BitMath.h"

#include "SC_interface.h"
#include "SC_private.h"
#include "SC_config.h"



void SC_voidInit(void) {

	#if CLOCK_TYPE == MOSC
		SC_RCC.Detail.ExternalOrNot 		= 0x0;
		SC_RCC.Detail.OSCSRC				= 0x0;
		SC_RCC.Detail.Extal 				= YOUR_CLOCKVALUE;

	#elif CLOCK_TYPE == PIOSC

		SC_RCC.Detail.ExternalOrNot 		= 0x1;
		SC_RCC.Detail.OSCSRC				= 0x1;
		SC_RCC.Detail.Extal 				= YOUR_CLOCKVALUE;

	#else
		#error
	#endif
	
	SC_RCC.Detail.PLLDN = USE_PLL_OR_NOT;
	 				
	
	#if USE_PLL_OR_NOT == USING_PLL
	
			SC_RCC.Detail.ByPass = 0x0;
	
	#elif USE_PLL_OR_NOT == NOT_USING_PLL
	
		SC_RCC.Detail.ByPass = 0x1;
	
	#endif

	SC_RCC.Detail.USESYSDIV = USE_SYSYTEM_DIVISOR_OR_NOT;
	SC_RCC.Detail.SYSDIV = YOUR_SYSYTEM_DIVISOR;
	
	SC_RCC.Detail.ACG = 0;
	
}


void SC_voidGPIOInit(u8 Copy_u8YourPortName) {
	
	setBit(SC_RCGCGPIO, Copy_u8YourPortName);
	SC_GPIOHBCTL |= (YOUR_GPIO_PERIPHERAL << Copy_u8YourPortName) ;

}


void SC_voidGPTInit(u8 Copy_u8YourCounterNumber) {

	switch (Copy_u8YourCounterNumber) {

		case R0:

			SC_RCGCTIMER.Detail.R0 = 0x1;
			break;

		case R1:

			SC_RCGCTIMER.Detail.R1 = 0x1;
			break;

		case R2:

			SC_RCGCTIMER.Detail.R2 = 0x1;
			break;

		case R3:

			SC_RCGCTIMER.Detail.R3 = 0x1;
			break;

		case R4:

			SC_RCGCTIMER.Detail.R4 = 0x1;
			break;

		case R5:

			SC_RCGCTIMER.Detail.R5 = 0x1;
			break;
			
	}

}
