The Embedded codes divided to 5 Layers to code an MCU for a target task

The first layer the Libraries Layer:

This layer represents the interface between the developer and the low level language, that it used to facilate our programming processes.it's cosidered as an open layer which we could use in any layare in our project.



The second layer the MCAL Layer:

(The Microcontroller Abstraction Layer) This layer is responsable for the interfaceing with the microcontroller, directly accesses on-chip MCU peripheral modules and external devices that are mapped to memory, and making the upper software layer independent of the MCU. To control this layer every module diivided to 4 files: 
  
  The Private.h file which used to define the registers addresses used in our project to facilate the programming processes.
  
  The interface.h file which used to facilate the orders and decisons for this module.
  
  The config.h file which used to configure and initialize the module to be used by other modules.
  
  The program.c file which used to set the functions of the module with the help of the other 3 files.


The third layer the HAL Layer:

(The Hardware Abstraction Layer) This layer is responsable for implementing a reusable hardware interfacing with the software by using the modules of the MCAL Layer which will be suitable with your hardware.



The fourth layer the Service Layer:

This layer is responsable for controlling the system with the suitable OS (FreeRTOS, Linux, ...). It's also control the communication protcols used in your system.


The fifth layer the Application Layer:

This Layer is responsable for writing the main code of the program to run and do the desired functions.
