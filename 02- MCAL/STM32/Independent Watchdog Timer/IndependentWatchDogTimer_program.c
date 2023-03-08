/*******************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                               */
/*  Version     : V01                                                                                                          */
/*  Date        : 5 MArch 2023                                                                                                 */
/*  Description : Watch Dog Timer File for the main tasks and functions                                                        */
/*******************************************************************************************************************************/

#include "BitMath.h"
#include "Macros.h"

#include "IndependentWatchDogTimer_interface.h"
#include "IndependentWatchDogTimer_config.h"
#include "IndependentWatchDogTimer_private.h"


void IWDT_Init(uint16_t reloadValue)
{

	IWDT_KEY_REGISTER = 0xCCCC;
    IWDT_KEY_REGISTER = 0x5555;
    IWDT_PRESCALER_REGISTER = YOUR_PRESCALLER_VALUE;
    IWDT_KEY_REGISTER = 0x5555;
    IWDT_RELOAD_REGISTER = reloadValue;
}


void IWDT_Kick(void)
{
    IWDT_KEY_REGISTER = 0xAAAA;
}
