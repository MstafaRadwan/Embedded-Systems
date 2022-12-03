#include "Types.h"
#include "BitMath.h"


#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

/*
RCC_HSE_Crystal 
RCC_HSE_RC 		
RCC_HSI   		
RCC_PLL		
*/

void RCC_voidInitSystClock() {
	#if   RCC_ClockType == RCC_HSE_Crystal
		RCC_CR   = 0x00010000;
		RCC_CFGR = 0x00000001;
	#elif RCC_ClockType == RCC_HSE_RC 
		RCC_CR   = 0x00050000;
		RCC_CFGR = 0x00000001;
	#elif RCC_ClockType == RCC_HSI
		RCC_CR   = 0x00000081;
		RCC_CFGR = 0x00000000;
	#elif RCC_ClockType == RCC_PLL	
		RCC_CFGR = (RCC_PLL_MULTIPIER-2) << 18;
		/*
		RCC_PLL_IN_HSI_DIV_2
		RCC_PLL_IN_HSE_DIV_2
		RCC_PLL_IN_HSE 
		*/
		#if RCC_PLL_INPUT   == RCC_PLL_IN_HSI_DIV_2
			///do nothing
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
			RCC_CFGR |= 0x00030000;
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE
			setBit(RCC_CFGR, 16);
		#else 
			#error("You chosed Wrong Clock type")
			// ERRRRRRRRRRRRRRRRRRRRRRRRRRor;
		#endif
		RCC_CR   = 0x01000000;
		RCC_CFGR |= 0x00000003;
	#else 
		#error("You chosed Wrong Clock type")
	#endif
}	





void RCC_void_EnableClock(u8 Copy_u8_BusID, u8 Copy_u8_PerID) {
	if (Copy_u8_BusID < 32)
	{
		switch (Copy_u8_BusID) {
			case RCC_AHB  : setBit(RCC_AHBENR , Copy_u8_PerID);
			break;

			case RCC_APB1 : setBit(RCC_APB1ENR, Copy_u8_PerID);
			break;

			case RCC_APB2 : setBit(RCC_APB2ENR, Copy_u8_PerID);
			break;
		}
	}
	else {

	}
}

void RCC_void_DisableClock(u8 Copy_u8_BusID, u8 Copy_u8_PerID) {
	if (Copy_u8_BusID < 32)
	{
		switch (Copy_u8_BusID) {
			case RCC_AHB  : clrBit(RCC_AHBENR , Copy_u8_PerID); break;
			case RCC_APB1 : clrBit(RCC_APB1ENR, Copy_u8_PerID); break;
			case RCC_APB2 : clrBit(RCC_APB2ENR, Copy_u8_PerID); break;
		}
	}
	else {
		/////ERRRRRRRRRRRRRRRrror
	}
}


// void void_RCC_ClockConfigration(u8 Copy_u8_PllFactor, u8 Copy_u8_ClockSelect, u8 Copy_u8_HSEDiv) { // HSE = 1
	

// 	if (!(Copy_u8_PllFactor > 1 && Copy_u8_PllFactor < 17 )) {
// 		/////ERRRRRRRRRRRRRRRrror
// 	}
// 	else if (Copy_u8_ClockSelect == 1) {
// 			clrBit(RCC_CFGR, 1);
// 			setBit(RCC_CFGR, 0);
// 			setBit(RCC_CFGR, 16);
			
// 	}
// 	else if (!Copy_u8_ClockSelect) {
		
// 	}
// 	else {

// 	}


// 	if (Copy_u8_PllFactor > 1 && Copy_u8_PllFactor < 17)
// 	{
// 		if (Copy_u8_ClockSelect == 0) // 
// 		{

// 		}
// 		else if (Copy_u8_ClockSelect == 1)
// 		{
			
// 		}
// 		else {
// 			/////ERRRRRRRRRRRRRRRrrorErrrrrrrrrrrrrrrror You Are in the wrong range ya 7omar
// 		}






// 	}
// 	else if (Copy_u8_PllFactor == 1)
// 	{
// 		if (Copy_u8_ClockSelect == 0) // you are in HSI 
// 		{
// 			clrBit(RCC_CFGR, 0);
// 			clrBit(RCC_CFGR, 1);
// 		}
// 		else if (Copy_u8_ClockSelect == 1) // you are in HSE
// 		{
// 			clrBit(RCC_CFGR, 1);
// 			setBit(RCC_CFGR, 0);
// 		}
// 		else {
// 			/////ERRRRRRRRRRRRRRRrrorErrrrrrrrrrrrrrrror You Are in the wrong range ya 7omar
// 		}
// 	}
// 	else {
// 		/////ERRRRRRRRRRRRRRRrrorErrrrrrrrrrrrrrrror You Are in the wrong range ya 7omar
// 	}
// }
