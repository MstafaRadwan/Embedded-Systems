#ifndef _SC_CONFIG_H
#define _SC_CONFIG_H

#include "Types.h"

#define CLOCK_TYPE									MOSC
#define YOUR_CLOCKVALUE			 					_16MHZ
				
#define USE_PLL_OR_NOT								NOT_USING_PLL

#define USE_SYSYTEM_DIVISOR_OR_NOT					NOT_USING_SYSYTEM_DIVISOR
#define YOUR_SYSYTEM_DIVISOR						SYSCTL_SYSDIV_3

#define USE_PWM_DIVISOR_OR_NOT						NOT_USING_PWM_DIVISOR
#define YOUR_PWM_DIVISOR							DIVISOR_BY_2

#define YOUR_GPIO_PERIPHERAL						GPIO_USING_AHB

void SC_voidInit(void);

void SC_voidGPIOInit(u8 Copy_u8YourPortName);

void SC_voidGPTInit(u8 Copy_u8YourCounterNumber);

#endif


