#ifndef _GPIO_PRIVATE_H
#define _GPIO_PRIVATE_H



	#define GPIO_DATA_PORTA_APB											((volatile u32*)0x400043FC)
	#define GPIO_DATA_PORTA_AHB											((volatile u32*)0x400583FC)
	#define GPIO_DATA_PORTB_APB											((volatile u32*)0x400053FC)
	#define GPIO_DATA_PORTB_AHB											((volatile u32*)0x400593FC)
	#define GPIO_DATA_PORTC_APB											((volatile u32*)0x400063FC)
	#define GPIO_DATA_PORTC_AHB											((volatile u32*)0x4005A3FC)
	#define GPIO_DATA_PORTD_APB											((volatile u32*)0x400073FC)
	#define GPIO_DATA_PORTD_AHB											((volatile u32*)0x4005B3FC)
	#define GPIO_DATA_PORTE_APB											((volatile u32*)0x400243FC)
	#define GPIO_DATA_PORTE_AHB											((volatile u32*)0x4005C3FC)
	#define GPIO_DATA_PORTF_APB											((volatile u32*)0x400253FC)
	#define GPIO_DATA_PORTF_AHB											((volatile u32*)0x4005D3FC)
			
				
	#define GPIO_DIRECTION_PORTA_APB								(*(volatile u32*)0x40004400)
	#define GPIO_DIRECTION_PORTA_AHB								(*(volatile u32*)0x40058400)
	#define GPIO_DIRECTION_PORTB_APB								(*(volatile u32*)0x40005400)
	#define GPIO_DIRECTION_PORTB_AHB								(*(volatile u32*)0x40059400)
	#define GPIO_DIRECTION_PORTC_APB								(*(volatile u32*)0x40006400)
	#define GPIO_DIRECTION_PORTC_AHB								(*(volatile u32*)0x4005A400)
	#define GPIO_DIRECTION_PORTD_APB								(*(volatile u32*)0x40007400)
	#define GPIO_DIRECTION_PORTD_AHB								(*(volatile u32*)0x4005B400)
	#define GPIO_DIRECTION_PORTE_APB								(*(volatile u32*)0x40024400)
	#define GPIO_DIRECTION_PORTE_AHB								(*(volatile u32*)0x4005C400)
	#define GPIO_DIRECTION_PORTF_APB								(*(volatile u32*)0x40025400)
	#define GPIO_DIRECTION_PORTF_AHB								(*(volatile u32*)0x4005D400)


	
	#define GPIO_DIGITAL_ENABLE_PORTA_APB						(*(volatile u32*)0x4000451C)
	#define GPIO_DIGITAL_ENABLE_PORTA_AHB						(*(volatile u32*)0x4005851C)
	#define GPIO_DIGITAL_ENABLE_PORTB_APB						(*(volatile u32*)0x4000551C)
	#define GPIO_DIGITAL_ENABLE_PORTB_AHB						(*(volatile u32*)0x4005951C)
	#define GPIO_DIGITAL_ENABLE_PORTC_APB						(*(volatile u32*)0x4000651C)
	#define GPIO_DIGITAL_ENABLE_PORTC_AHB						(*(volatile u32*)0x4005A51C)
	#define GPIO_DIGITAL_ENABLE_PORTD_APB						(*(volatile u32*)0x4000751C)
	#define GPIO_DIGITAL_ENABLE_PORTD_AHB						(*(volatile u32*)0x4005B51C)
	#define GPIO_DIGITAL_ENABLE_PORTE_APB						(*(volatile u32*)0x4002451C)
	#define GPIO_DIGITAL_ENABLE_PORTE_AHB						(*(volatile u32*)0x4005C51C)
	#define GPIO_DIGITAL_ENABLE_PORTF_APB						(*(volatile u32*)0x4002551C)
	#define GPIO_DIGITAL_ENABLE_PORTF_AHB						(*(volatile u32*)0x4005D51C)

	
	#define GPIOAFSE_PORTA_APB									(*(volatile u32*)0x40004420)
	#define GPIOAFSE_PORTA_AHB									(*(volatile u32*)0x40058420)
	#define GPIOAFSE_PORTB_APB									(*(volatile u32*)0x40005420)
	#define GPIOAFSE_PORTB_AHB									(*(volatile u32*)0x40059420)
	#define GPIOAFSE_PORTC_APB									(*(volatile u32*)0x40006420)
	#define GPIOAFSE_PORTC_AHB									(*(volatile u32*)0x4005A420)
	#define GPIOAFSE_PORTD_APB									(*(volatile u32*)0x40007420)
	#define GPIOAFSE_PORTD_AHB									(*(volatile u32*)0x4005B420)
	#define GPIOAFSE_PORTE_APB									(*(volatile u32*)0x40024420)
	#define GPIOAFSE_PORTE_AHB									(*(volatile u32*)0x4005C420)
	#define GPIOAFSE_PORTF_APB									(*(volatile u32*)0x40025420)
	#define GPIOAFSE_PORTF_AHB									(*(volatile u32*)0x4005D420)



	#define GPIOAMSEL_PORTA_APB									(*(volatile u32*)0x400044528)
	#define GPIOAMSEL_PORTA_AHB									(*(volatile u32*)0x400584528)
	#define GPIOAMSEL_PORTB_APB									(*(volatile u32*)0x400054528)
	#define GPIOAMSEL_PORTB_AHB									(*(volatile u32*)0x400594528)
	#define GPIOAMSEL_PORTC_APB									(*(volatile u32*)0x400064528)
	#define GPIOAMSEL_PORTC_AHB									(*(volatile u32*)0x4005A4528)
	#define GPIOAMSEL_PORTD_APB									(*(volatile u32*)0x400074528)
	#define GPIOAMSEL_PORTD_AHB									(*(volatile u32*)0x4005B4528)
	#define GPIOAMSEL_PORTE_APB									(*(volatile u32*)0x400244528)
	#define GPIOAMSEL_PORTE_AHB									(*(volatile u32*)0x4005C4528)
	#define GPIOAMSEL_PORTF_APB									(*(volatile u32*)0x400254528)
	#define GPIOAMSEL_PORTF_AHB									(*(volatile u32*)0x4005D4528)	

#endif
