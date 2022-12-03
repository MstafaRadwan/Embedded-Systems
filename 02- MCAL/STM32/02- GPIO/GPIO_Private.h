#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H


#define GPIO_PORT_A_BASE_ADRESS 0x40010800
#define GPIO_PORT_B_BASE_ADRESS 0x40010C00
#define GPIO_PORT_C_BASE_ADRESS 0x40011000


#define GPIOA_CRL  *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x00))
#define GPIOA_CRH  *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x04))
#define GPIOA_IDR  *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x08))
#define GPIOA_ODR  *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x0c))
#define GPIOA_BSRR *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x20))
#define GPIOA_BRR  *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x24))
#define GPIOA_LCKR *((volatile u32*)(GPIO_PORT_A_BASE_ADRESS + 0x28))


#define GPIOB_CRL  *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x00))
#define GPIOB_CRH  *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x04))
#define GPIOB_IDR  *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x08))
#define GPIOB_ODR  *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x0c))
#define GPIOB_BSRR *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x20))
#define GPIOB_BRR  *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x24))
#define GPIOB_LCKR *((volatile u32*)(GPIO_PORT_B_BASE_ADRESS + 0x28))


#define GPIOC_CRL  *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x00))
#define GPIOC_CRH  *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x04))
#define GPIOC_IDR  *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x08))
#define GPIOC_ODR  *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x0c))
#define GPIOC_BSRR *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x20))
#define GPIOC_BRR  *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x24))
#define GPIOC_LCKR *((volatile u32*)(GPIO_PORT_C_BASE_ADRESS + 0x28))



#endif