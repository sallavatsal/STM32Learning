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

typedef struct{
uint8_t data1;
uint32_t data2;
uint8_t data3;
uint16_t data4;
}Data_t;

void modifyTheBytes(Data_t *modifier);

int main(){
	Data_t D;
	D.data1 = 0x11;									// 1 byte
	D.data2 = 0xFFFFEEEE;					// 4 bytes
	D.data3 = 0x22;									// 1 byte
	D.data4 = 0xABCD;							// 2 bytes. Total: 8 bytes

	printf("Values Before: ");
	printf("\nD.data1 = %X", D.data1);
	printf("\nD.data2 = %X", D.data2);
	printf("\nD.data3 = %X", D.data3);
	printf("\nD.data4 = %X", D.data4);

	modifyTheBytes(&D);

	printf("\n\nValues After: ");
	printf("\nD.data1 = %X", D.data1);
	printf("\nD.data2 = %X", D.data2);
	printf("\nD.data3 = %X", D.data3);
	printf("\nD.data4 = %X", D.data4);



	printf("\n\nPress Enter to exit");
	getchar();

	return 0;
}

void modifyTheBytes(Data_t *modifier){
	modifier->data1 = 0x22;									// 1 byte
	modifier->data2 = 0xCCCCBBBB;					// 4 bytes
	modifier->data3 = 0x33;									// 1 byte
	modifier->data4 = 0xEFEF;								// 2 bytes. Total: 8 bytes
}