#include "Types.h"
#include "BitMath.h"

#include "SysTick_interface.h"
#include "SysTick_private.h"
#include "SysTick_config.h"

#include "SC_config.h"
#include "SC_interface.h"


void SysTick_voidDelay(u32 Copy_u32NumberOfTicks) {

	SYSTICK_STCTRL.Detail.Enable = 0;
	SYSTICK_STRELOAD = Copy_u32NumberOfTicks - 1;
	SYSTICK_STCURRENT = 0xFFFF;							// to clear the count bit
	#if CLOCK_TYPE == 0
		SYSTICK_STCTRL.Detail.ClockSource = 1;
	#elif CLOCK_TYPE == 1
		SYSTICK_STCTRL.Detail.ClockSource = 0;
	#endif
	SYSTICK_STCTRL.Detail.Enable = 1;

	while(SYSTICK_STCTRL.Detail.Count == 0);
	
//	SYSTICK_STCTRL.Detail.Enable = 0;
}

void SysTick_voidDelayByInturrupt(u32 Copy_u32NumberOfTicks) {

	SYSTICK_STCTRL.Detail.Enable = 0;
	SYSTICK_STRELOAD = Copy_u32NumberOfTicks - 1;
	SYSTICK_STCURRENT = 0xFFFF;							// to clear the count bit
	#if CLOCK_TYPE == 0
		SYSTICK_STCTRL.Detail.ClockSource = 1;
	#elif CLOCK_TYPE == 1
		SYSTICK_STCTRL.Detail.ClockSource = 0;
	#endif
	SYSTICK_STCTRL.Detail.InterrupEnable = 1;
	SYSTICK_STCTRL.Detail.Enable = 1;

}

