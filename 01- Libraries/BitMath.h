
/******************************************************************************************************************************************/
/*  Author      : Mostafa Radwan                                                                                                          */
/*  Version     : V01                                                                                                                     */
/*  Date        : 10 Sept 2022	                                                                                                          */
/*  Discription : Mostly Bit math operations we will use                                                                                  */
/******************************************************************************************************************************************/



#ifndef BIT_MATH_H
#define BIT_MATH_H

#define setBit(abdou, radwan)    	abdou |=  (1 << radwan)
#define clrBit(abdou, radwan)  		abdou &= ~(1 << radwan)
#define toggleBit(abdou, radwan) 	abdou ^=  (1 << radwan)
#define getValue(abdou, radwan) 	abdou    &(1 << radwan)

#endif
