/*******************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                               */
/*  Version     : V01                                                                                                          */
/*  Date        : 5 MArch 2023                                                                                                 */
/*  Description : Watch Dog Timer File for the address of the registers                                                        */
/*******************************************************************************************************************************/




#ifndef INDPENDANT_WATCH_DOG_TIMER_PRIVATE_H_
#define INDPENDANT_WATCH_DOG_TIMER_PRIVATE_H_


#define IWDT_BASE_ADDRESS                   (*((volatile uint32_t*) 0x40003000))
#define IWDT_KEY_REGISTER                   (*((volatile uint32_t*) 0x40003000))
#define IWDT_PRESCALER_REGISTER             (*((volatile uint32_t*) 0x40003004))
#define IWDT_RELOAD_REGISTER                (*((volatile uint32_t*) 0x40003008))

//#define DEBUG								(*((volatile uint32_t*) 0xE0042004))


#endif