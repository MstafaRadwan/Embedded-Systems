#ifndef _NVIC_INTERFACE_H
#define _NVIC_INTERFACE_H


/*		choose your Interrupt		*/


#define xxx 		0x0
#define xxy			0x5
#define xyy			0x6
#define yyy			0x7

enum InterruptChoosen {
	Reset = 1,
	NonMaskableInterrupt,
	HardFault,
	MemoryManagement,
	BusFault,
	UsageFault,
	SVCall = 11,
	DebugMonitor,
	PendSV = 14,
	SysTick,

	GPIO_PortA,
	GPIO_PortB,
	GPIO_PortC,
	GPIO_PortD,
	GPIO_PortE,
	UART0,
	UART1,
	SSI0,
	I2C0,
	PWM0_Fault,
	PWM0_Generator0,
	PWM0_Generator1,
	PWM0_Generator2,
	QEI0,
	ADC0_Sequence0,
	ADC0_Sequence1,
	ADC0_Sequence2,
	ADC0_Sequence3,
	Watchdog_Timers0,
	D16B32BitTimer0A,
	D16B32BitTimer0B,
	D16B32BitTimer1A,
	D16B32BitTimer1B,
	D16B32BitTimer2A,
	D16B32BitTimer2B,
	Analog_Comparator0,
	Analog_Comparator1,
	System_Control = 44,
	FlashMemoryControlAndEEPROMContr,
	GPIO_PortF,
	UART2 = 49,
	SSI1,
	D16B32BitTimer3A,
	D16B32BitTimer3B,
	I2C1,
	QEI1,
	CAN0,
	CAN1,
	HibernationModule = 59,
	USB,
	PWM_Generator3,
	uDMA_Software,
	uDMA_Error,
	ADC1_Sequence0,
	ADC1_Sequence1,
	ADC1_Sequence2,
	ADC1_Sequence3,
	SSI2 = 73,
	SSI3,
	UART3,
	UART4,
	UART5,
	UART6,
	UART7,
	I2C2 = 84,
	I2C3,
	D16B32BitTimer4A,
	D16B32BitTimer4B,
	D16B32BitTimer5A = 108,
	D16B32BitTimer5B,
	D32B64BitTimer0A,
	D32B64BitTimer0B,
	D32B64BitTimer1A,
	D32B64BitTimer1B,
	D32B64BitTimer2A,
	D32B64BitTimer2B,
	D32B64BitTimer3A,
	D32B64BitTimer3B,
	D32B64BitTimer4A,
	D32B64BitTimer4B,
	D32B64BitTimer5A,
	D32B64BitTimer5B,
	SystemException,
	PWM1_Generator0 = 150,
	PWM1_Generator1,
	PWM1_Generator2,
	PWM1_Generator3,
	PWM1_Fault
};


#endif
