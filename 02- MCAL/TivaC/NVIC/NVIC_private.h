#ifndef _NVIC_PIRVATE_H
#define _NVIC_PIRVATE_H

#include "Types.h"

#define NVIC_EN								((volatile u8*)0xE000E100)


typedef struct {
	u8					:4;
	u8 one			:4;
	u8					:4;
	u8 two			:4;
	u8					:4;
	u8 three		:4;
	u8					:4;
	u8 four			:4;	
} NVIC_PRI_Details;

typedef union {
	u32 All;
	NVIC_PRI_Details Detail;
} yourDetails;


#define NVIC_PRI 								((volatile yourDetails*) 0xE000E400)

#define SCB_APINT								*((volatile u32*)0xE000ED0C)
	

typedef struct {

	u8				:5;
	u8 MEM		:3;
	u8				:5;
	u8 BUS		:3;
	u8				:5;
	u8 USAGE	:3;

}StructOfSYSPRI1;

typedef union {
	u32 All;
	StructOfSYSPRI1 Detail;
}UnionOfSYSPRI1;

#define SCB_SYSPRI1								(*((volatile UnionOfSYSPRI1*)0xE000ED18))


typedef struct {

	u32				:29;
	u8 SVC		:3;

}StructOfSYSPRI2;

typedef union {
	u32 All;
	StructOfSYSPRI2 Detail;
}UnionOfSYSPRI2;

#define SCB_SYSPRI2								(*((volatile UnionOfSYSPRI2*)0xE000ED1C))


typedef struct {
	
	u8				:5;
	u8 DEBUG	:3;
	u32				:13;
	u8 PENDSV	:3;
	u8				:5;
	u8 TICK		:3;

}StructOfSYSPRI3;

typedef union {
	u32 All;
	StructOfSYSPRI3 Detail;
}UnionOfSYSPRI3;

#define SCB_SYSPRI3								(*((volatile UnionOfSYSPRI3*)0xE000ED20))


#define SCB_SYSHNDCTRL							(*((volatile u32*)0xE000ED24))
	
	


#endif
