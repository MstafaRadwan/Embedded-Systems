#ifndef _SC_INTERFACE_H
#define _SC_INTERFACE_H

		
#define MOSC 											0
#define PIOSC 											1
				
#define _4MHZ											0x06
#define _5MHZ											0x09
#define _6MHZ											0x0B
#define _8MHZ											0x0E
#define _10MHZ											0x10
#define _12MHZ											0x11
#define _16MHZ											0x15
#define _18MHZ											0x17
#define _20MHZ											0x18
#define _24MHZ											0x19
#define _25MHZ											0x1A

#define USING_PLL										0
#define NOT_USING_PLL									1

#define USING_SYSYTEM_DIVISOR							1
#define NOT_USING_SYSYTEM_DIVISOR				 		0
#define SYSCTL_SYSDIV_3									0x2
#define SYSCTL_SYSDIV_4									0x3
#define SYSCTL_SYSDIV_5									0x4
#define SYSCTL_SYSDIV_6									0x5
#define SYSCTL_SYSDIV_7									0x6
#define SYSCTL_SYSDIV_8									0x7
#define SYSCTL_SYSDIV_9									0x8
#define SYSCTL_SYSDIV_10								0x9
#define SYSCTL_SYSDIV_11								0xA
#define SYSCTL_SYSDIV_12								0xB
#define SYSCTL_SYSDIV_13								0xC
#define SYSCTL_SYSDIV_14								0xD
#define SYSCTL_SYSDIV_15								0xE
#define SYSCTL_SYSDIV_16								0xF

#define USEING_PWM_DIVISOR								1
#define NOT_USEING_PWM_DIVISOR							0		
#define PWM_DIVISOR_BY_2								0
#define PWM_DIVISOR_BY_4								0x1
#define PWM_DIVISOR_BY_8								0x2
#define PWM_DIVISOR_BY_16								0x3
#define PWM_DIVISOR_BY_32								0x4
#define PWM_DIVISOR_BY_64								0x7

#define GPIO_USING_AHB									1
#define GPIO_USING_APB									0

#endif
