/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022	                                                                                                          */
/*  Discription : BCM communication Module				                                                                                  */
/******************************************************************************************************************************************/



#ifndef BCM_H
#define BCM_H


void BCM_voidInit();
void BCM_voidBaudrate(u16 Copy_u16YourBaudRate);
void BCM_voidSendData(u32 Copy_u32PointerToTheMesseage);
u32  BCM_u32RecieveData();


#endif