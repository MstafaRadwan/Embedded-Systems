#ifndef _SYSTICK_PIRVATE_H
#define _SYSTICK_PIRVATE_H



typedef struct {
	u8 Enable			:1 ;
	u8 InterrupEnable	:1 ;
	u8 ClockSource		:1 ;
	u16					:13;
	u8 Count			:1 ;
	u16						:15;
}SYSTICK_STCTRL_DETAIL;


typedef union {
	u32 All;
	SYSTICK_STCTRL_DETAIL Detail;
}SYSTICK_STCTRL_UON;


#define SYSTICK_STCTRL									(*(volatile SYSTICK_STCTRL_UON*)0xE000E010)
#define SYSTICK_STRELOAD								(*(volatile u32*)0xE000E014)
#define SYSTICK_STCURRENT								(*(volatile u32*)0xE000E018)


#endif
