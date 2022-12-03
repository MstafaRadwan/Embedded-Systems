#include "Types.h"
#include "BitMath.h"

#include "NVIC_interface.h"
#include "NVIC_config.h"
#include "NVIC_private.h"


void NVIC_voidInit(void) {

	__asm("CPSIE  I\n");
	#if INTURRUPT_MIN_VALUE == 1
	__asm("MOV r0,#0x1\n"
		"MSR basepri,r0\n");
	#elif INTURRUPT_MIN_VALUE == 2
	__asm("MOV r0,#0x2\n"
		"MSR basepri,r0\n");
	#elif INTURRUPT_MIN_VALUE == 3
	__asm("MOV r0,#0x3\n"
		"MSR basepri,r0\n");
	#elif INTURRUPT_MIN_VALUE == 4
	__asm("MOV r0,#0x4\n"
		"MSR basepri,r0\n");
	#elif INTURRUPT_MIN_VALUE == 5
	__asm("MOV r0,#0x5\n"
		"MSR basepri,r0\n");
	#elif INTURRUPT_MIN_VALUE == 6
	__asm("MOV r0,#0x6\n"
		"MSR basepri,r0\n");
	#elif INTURRUPT_MIN_VALUE == 7
	__asm("MOV r0,#0x7\n"
		"MSR basepri,r0\n");
	#endif
	
	#if PREGROUP_BIT_FIELD == xxx 
		SCB_APINT = 0xFA050000 ;
	#elif PREGROUP_BIT_FIELD == xxy
		SCB_APINT = 0xFA050005 ;
	#elif PREGROUP_BIT_FIELD == xyy
		SCB_APINT = 0xFA050006 ;
	#elif PREGROUP_BIT_FIELD == yyy
		SCB_APINT = 0xFA050007 ;
	#endif
}





void NVIC_voidEnableInterrupt(u8 Copy_u8InterruptType) {
	
	if (Copy_u8InterruptType > 15) {
		Copy_u8InterruptType -= 0x10;
		NVIC_EN[0] |= 0xffffffff ;
		SCB_SYSHNDCTRL |= 0x00700000;
	}
	else if (Copy_u8InterruptType == SysTick) {
		SCB_SYSHNDCTRL |= 0x00008000;
	}
	else if (Copy_u8InterruptType == MemoryManagement) {
		SCB_SYSHNDCTRL |= 0x00010000;
	}
}

void NVIC_voidDisableInterrupt(u8 Copy_u8InterruptType) {
	Copy_u8InterruptType -= 0x10;
}


void NVIC_voidSetPriority(u8 Copy_u8InterruptType, u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority) {
	if (Copy_u8InterruptType > 15) {

		Copy_u8InterruptType -= 0x10;
		u8 local_u8AddressOfInterrupt = (Copy_u8InterruptType >> 2);
		u8 local_u8Remain = (Copy_u8InterruptType - local_u8AddressOfInterrupt);
		#if PREGROUP_BIT_FIELD == xxx 
			if (Copy_u8GroupPriority > 7 && Copy_u8SubGroupPriority == 0) {
				if (local_u8Remain == 0)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.one = Copy_u8GroupPriority;
				else if (local_u8Remain == 1)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.two = Copy_u8GroupPriority;
				else if (local_u8Remain == 2)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.three = Copy_u8GroupPriority;
				else
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.four = Copy_u8GroupPriority;
			}
			else {
				/*Errrrrrrrrrrrrrrrrrrrrror*/
			}
		#elif PREGROUP_BIT_FIELD == xxy
			if ((Copy_u8GroupPriority < 4) && Copy_u8SubGroupPriority < 2) {
				if (local_u8Remain == 0) 
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.one   = 0b01100000;
				//	NVIC_PRI[local_u8AddressOfInterrupt].Detail.one   = (((Copy_u8GroupPriority << 1) | Copy_u8SubGroupPriority)) << 4;

				else if (local_u8Remain == 1)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.two   = 0b01100000;
				//	NVIC_PRI[local_u8AddressOfInterrupt].Detail.two   = (((Copy_u8GroupPriority << 1) | Copy_u8SubGroupPriority)) << 4;
				else if (local_u8Remain == 2)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.three = 0b01100000;
				//  NVIC_PRI[local_u8AddressOfInterrupt].Detail.three = (((Copy_u8GroupPriority << 1) | Copy_u8SubGroupPriority)) << 4;
				else
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.four  = 0b01100000;
				//  NVIC_PRI[local_u8AddressOfInterrupt].Detail.four  = (((Copy_u8GroupPriority << 1) | Copy_u8SubGroupPriority)) << 4;
			}
			else {
				/*Errrrrrrrrrrrrrrrrrrrrror*/
			}
		#elif PREGROUP_BIT_FIELD == xyy
			if ((Copy_u8GroupPriority < 2) && Copy_u8SubGroupPriority < 4) {
				if (local_u8Remain == 0) 
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.one =   ((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
				else if (local_u8Remain == 1)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.two =   ((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
				else if (local_u8Remain == 2)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.three = ((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
				else
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.four =  ((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
			}
			else {
				/*Errrrrrrrrrrrrrrrrrrrrror*/
			}
		#elif PREGROUP_BIT_FIELD == yyy
			if (Copy_u8GroupPriority == 0 && (Copy_u8SubGroupPriority < 8) ) {
				if (local_u8Remain == 0) 
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.one = 	((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
				else if (local_u8Remain == 1)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.two = 	((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
				else if (local_u8Remain == 2)
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.three = ((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
				else
					NVIC_PRI[local_u8AddressOfInterrupt].Detail.four = 	((Copy_u8GroupPriority << 2) | Copy_u8SubGroupPriority);
			}
			else {
				/*Errrrrrrrrrrrrrrrrrrrrror*/
			}
		#endif
		

	}
	else if (Copy_u8InterruptType == SysTick) {
		SCB_SYSPRI3.Detail.TICK = Copy_u8GroupPriority;
	//	SCB_SYSPRI3.All |= Copy_u8GroupPriority << 29; 
	}
	else if (Copy_u8InterruptType == MemoryManagement) {
		SCB_SYSPRI1.Detail.MEM = Copy_u8GroupPriority;
	}
	
	else if (Copy_u8InterruptType == UsageFault) {
		SCB_SYSPRI1.Detail.USAGE = Copy_u8GroupPriority;
	}
	
	
}
