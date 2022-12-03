



#ifndef ADC_CONFIG_H
#define ADC_CONFIG_H


#define CHOOSE_YOUR_ANALOG_PIN					AIN0


void ADC_voidInit(u8 Copy_u8analogPin);

u8 ADC_u8GetValue(u8 Copy_u8pinNumber);

#endif