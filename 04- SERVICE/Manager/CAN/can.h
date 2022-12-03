/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 7 Nov 2022	                                                                                                          */
/*  Discription : CAN communication protochol			                                                                                  */
/******************************************************************************************************************************************/



#ifndef CAN_H
#define CAN_H


void CAN_voidInit();
void CAN_voidBaudrate(u16 Copy_u16YourBaudRate);
void CAN_voidSendData(u32 Copy_u32PointerToTheMesseage);
u32  CAN_u32RecieveData();


#endif