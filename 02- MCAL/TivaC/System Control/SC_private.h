#ifndef _SC_PIRVATE_H
#define _SC_PIRVATE_H


#include "Types.h"

typedef struct
{
		
	u32 ExternalOrNot					:1;
	u32  								:3;
	u32 OSCSRC							:2;
	u32 Extal 							:5;
	u32 ByPass							:1;
	u32 								:1;
	u32 PLLDN							:1;
	u32 								:3;
	u32 PWMDIV							:3;
	u32 USEPWMDIV						:1;
	u32 								:1;
	u32 USESYSDIV						:1;
	u32 SYSDIV							:4;
	u32 ACG								:1;
	
}SC_RCC_DEtails;


typedef union {
	u32 All;
	SC_RCC_DEtails Detail;
}DetPoint;


#define SC_RCC							(*((volatile DetPoint*)0x400FE060))


#define SC_RCGCGPIO						(*((volatile u32*)0x400FE608))
#define SC_GPIOHBCTL					(*((volatile u32*)0x400FE06C))


typedef struct {

	u8 R0	:1;
	u8 R1	:1;
	u8 R2	:1;
	u8 R3	:1;
	u8 R4	:1;
	u8 R5	:1;

}SC_RCGCTIMER_Detail;

typedef union {

	u32 All;
	SC_RCGCTIMER_Detail Detail;

}SC_RCGCTIMER_Union;

#define SC_RCGCTIMER 					(*((volatile SC_RCGCTIMER_Union*)0x400FE604))



typedef struct {

	u8 R0	:1;
	u8 R1	:1;
	u8 R2	:1;
	u8 R3	:1;
	u8 R4	:1;
	u8 R5	:1;

}SC_RCGCTIMER_Detail;

typedef union {

	u32 All;
	SC_RCGCWTIMER_Detail Detail;

}SC_RCGCWTIMER_Union;

#define SC_RCGCWTIMER 					(*((volatile SC_RCGCWTIMER_Union*)0x400FE65C))

#endif
