#include "SysTick_config.h"
#include "SC_config.h"
#include "GPIO_config.h"
#include "GPIO_interface.h"

void DelayInSeconds(u8 Copy_u8YourDelayTimeInSeconds);


#define POST_YOUR_PORT_NAME													E
#define POST_YOUR_PIN_NUMBER												1


int main(void) {
	
	SC_voidInit();
	SC_voidGPIOInit(POST_YOUR_PORT_NAME);
	
	GPIO_voidSetPinDirection(POST_YOUR_PORT_NAME, POST_YOUR_PIN_NUMBER, OUTPUT);
	
	u8 EnterThePowerOnTimeInSeconds  = 2;
	u8 EnterThePowerOffTimeInSeconds = 3;
	
	while(1) {
		
		GPIO_voidSetBit(POST_YOUR_PORT_NAME, POST_YOUR_PIN_NUMBER);
		DelayInSeconds(EnterThePowerOnTimeInSeconds);
		
		GPIO_voidClearBit(POST_YOUR_PORT_NAME, POST_YOUR_PIN_NUMBER);
		DelayInSeconds(EnterThePowerOffTimeInSeconds);
	
	}
}



void DelayInSeconds(u8 Copy_u8YourDelayTimeInSeconds) {
	while(Copy_u8YourDelayTimeInSeconds-- > 0) {
		SysTick_voidDelay(16000000);							// delay 1sec
	}
}
