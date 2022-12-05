
/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 10 Sept 2022	                                                                                                          */
/*  Discription : Mostly Bit math operations we will use                                                                                  */
/******************************************************************************************************************************************/



#ifndef BIT_MATH_H
#define BIT_MATH_H

#define setBit(RegisterName, BitNumber)    	RegisterName |=  (1 << BitNumber)
#define clrBit(RegisterName, BitNumber)  		RegisterName &= ~(1 << BitNumber)
#define toggleBit(RegisterName, BitNumber) 	RegisterName ^=  (1 << BitNumber)
#define getValue(RegisterName, BitNumber) 	RegisterName &(1 << BitNumber)

#endif
