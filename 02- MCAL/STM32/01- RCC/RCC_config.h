#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H


/*
Clock options
RCC_HSE_Crystal 
RCC_HSE_RC 		
RCC_HSI   		
RCC_PLL			
*/
#define RCC_ClockType RCC_HSE_Crystal


/*
PLL options
RCC_PLL_IN_HSI_DIV_2
RCC_PLL_IN_HSE_DIV_2
RCC_PLL_IN_HSE 		
*/

#if RCC_ClockType == RCC_PLL
	#define RCC_PLL_INPUT RCC_PLL_IN_HSE_DIV_2
	// multiplier range from 2 to 16
	#define RCC_PLL_MULTIPIER 2
#endif

#endif
