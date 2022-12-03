#ifndef _NVIC_CONFIG_H
#define _NVIC_CONFIG_H



#include "Types.h"

/*
	choose your Group Bit Field
		xxx
		xxy
		xyy
		yyy
*/
#define PREGROUP_BIT_FIELD			xxy


/*
	you can choose what you want from the enune table
*/
#define INTURRUPT_TYPE 				MemoryManagement

#define INTURRUPT_MIN_VALUE		5

void NVIC_voidInit(void);

void NVIC_voidSetPriority(u8 Copy_u8InterruptType, u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority);

void NVIC_voidEnableInterrupt(u8 Copy_u8InterruptType);

void NVIC_voidDisableInterrupt(u8 Copy_u8InterruptType);


#endif
