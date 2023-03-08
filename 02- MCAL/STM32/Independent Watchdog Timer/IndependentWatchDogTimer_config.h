/*******************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                               */
/*  Version     : V01                                                                                                          */
/*  Date        : 5 MArch 2023                                                                                                 */
/*  Description : Watch Dog Timer File for the configuration of the module                                                     */
/*******************************************************************************************************************************/


#ifndef INDPENDANT_WATCH_DOG_TIMER_CONFIG_H_
#define INDPENDANT_WATCH_DOG_TIMER_CONFIG_H_


#define YOUR_PRESCALLER_VALUE                   PRESCALLER_BY_4


void IWDT_Init(uint16_t);
void IWDT_Kick(void);


#endif