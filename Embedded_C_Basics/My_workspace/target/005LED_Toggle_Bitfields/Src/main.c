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

int main(){
	// Addresses as pointers
	RCC_AHB1ENR_t volatile *const pClkCtrlreg = (RCC_AHB1ENR_t*)(0x40023830);		// RCC_AHB1ENR Clock enable register
	GPIOx_MODE_t volatile *const pPortDModereg = (GPIOx_MODE_t*)(0x40020C00);		// GPIOD Control Mode
	GPIOx_ODR_t volatile *const pPortDOutreg = (GPIOx_ODR_t*)(0x40020C14);		// GPIO D Output Data register

	pClkCtrlreg->GPIOD_EN = 1;
	pPortDModereg->PIN_12 = 1;

// Toggling LED
	while(1){
		pPortDOutreg->PIN_12 = 1;							// Setting the 12th bit
		for(int i=0; i<300000; ++i);
		pPortDOutreg->PIN_12 = 0;							// Setting the 12th bit
		for(int i=0; i<300000; ++i);
	}

	return 0;
}
