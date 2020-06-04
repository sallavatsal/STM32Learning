/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#include<stdio.h>
#include<stdint.h>
#include "main.h"

void delay(void){
	for(uint32_t i=0; i<300000; ++i);
}

int main(void)
{
	RCC_AHB1ENR_t volatile *const pClkCtrlreg = (RCC_AHB1ENR_t*)(0x40023830);		// Clock enable
	GPIOx_MODE_t volatile *const pPortDModereg = (GPIOx_MODE_t*)(0x40020C00);		// GPIOD Control Mode
	GPIOx_PUPDR_t volatile *const pPortDPUPDreg = (GPIOx_PUPDR_t*)(0x40020C00);		// GPIO D Pull-Up/Pull Down register
	GPIOx_ODR_t volatile *const pPortDOutreg = (GPIOx_ODR_t*)(0x40020C14);			// GPIO D Output Data register
	GPIOx_IDR_t volatile *const pPortDInreg = (GPIOx_IDR_t*)(0x40020C00);			// GPIO D Input Data register

	// Enable Clock for the GPIO pin
	pClkCtrlreg->GPIOD_EN = 1;														// GPIOD enabled

	// Configure Port Mode register as input/output for the respective keypad connected pins
	pPortDModereg->PIN_0 = 1;														// Set as output
	pPortDModereg->PIN_1 = 1;														// Set as output
	pPortDModereg->PIN_2 = 1;														// Set as output
	pPortDModereg->PIN_3 = 1;														// Set as output
	pPortDModereg->PIN_8 = 0;														// Set as input
	pPortDModereg->PIN_9 = 0;														// Set as input
	pPortDModereg->PIN_10 = 0;														// Set as input
	pPortDModereg->PIN_11 = 0;														// Set as input

	// Configure all the input/output pins as HIGH
	pPortDOutreg->PIN_0 = 1;														// Setting Out Pin 0
	pPortDOutreg->PIN_1 = 1;														// Setting Out Pin 1
	pPortDOutreg->PIN_2 = 1;														// Setting Out Pin 2
	pPortDOutreg->PIN_3 = 1;														// Setting Out Pin 3
	pPortDPUPDreg->PIN_8 = 1;														// Setting In pin 8
	pPortDPUPDreg->PIN_9 = 1;														// Setting In pin 9
	pPortDPUPDreg->PIN_10 = 1;														// Setting In pin 10
	pPortDPUPDreg->PIN_11 = 1;														// Setting In pin 11

	while(1){
		pPortDOutreg->PIN_0 = 0;														// Clearing Out Pin 0
		if(!(pPortDOutreg->PIN_8)){
			delay();
			printf("1 is pressed");
		}
		else if(!(pPortDOutreg->PIN_9)){
			delay();
			printf("2 is pressed");
		}
		else if(!(pPortDOutreg->PIN_10)){
			delay();
			printf("3 is pressed");
		}
		else if(!(pPortDOutreg->PIN_11)){
			delay();
			printf("A is pressed");
		}
/*		else{
			delay();
			printf("No key is pressed");
		}
*/		pPortDOutreg->PIN_0 = 1;														// Setting Out Pin 0
		pPortDOutreg->PIN_1 = 0;														// Clearing Out Pin 1
		if(!(pPortDOutreg->PIN_8)){
			delay();
			printf("4 is pressed");
		}
		else if(!(pPortDOutreg->PIN_9)){
			delay();
			printf("5 is pressed");
		}
		else if(!(pPortDOutreg->PIN_10)){
			delay();
			printf("6 is pressed");
		}
		else if(!(pPortDOutreg->PIN_11)){
			delay();
			printf("B is pressed");
		}
/*		else{
			delay();
			printf("No key is pressed");
		}
*/		pPortDOutreg->PIN_1 = 1;														// Setting Out Pin 1
		pPortDOutreg->PIN_2 = 0;														// Clearing Out Pin 2
		if(!(pPortDOutreg->PIN_8)){
			delay();
			printf("7 is pressed");
		}
		else if(!(pPortDOutreg->PIN_9)){
			delay();
			printf("8 is pressed");
		}
		else if(!(pPortDOutreg->PIN_10)){
			delay();
			printf("9 is pressed");
		}
		else if(!(pPortDOutreg->PIN_11)){
			delay();
			printf("C is pressed");
		}
/*		else{
			delay();
			printf("No key is pressed");
		}
*/		pPortDOutreg->PIN_2 = 1;														// Setting Out Pin 2
		pPortDOutreg->PIN_3 = 0;														// Setting Out Pin 3
		if(!(pPortDOutreg->PIN_8)){
			delay();
			printf("* is pressed");
		}
		else if(!(pPortDOutreg->PIN_9)){
			delay();
			printf("0 is pressed");
		}
		else if(!(pPortDOutreg->PIN_10)){
			delay();
			printf("# is pressed");
		}
		else if(!(pPortDOutreg->PIN_11)){
			delay();
			printf("D is pressed");
		}
/*		else{
			delay();
			printf("No key is pressed");
		}*/
}
	return 0;
}
