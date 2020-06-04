/*
 * main.c
 *
 *  Created on: Apr 29, 2020
 *      Author: VHS0104
 */

#include<stdio.h>
#include<stdint.h>
#include "packet.h"

int main(){
	struct DATASET D; 
	D.data1 = 0x11;									// 1 byte
	D.data2 = 0xFFFFEEEE;							// 4 bytes
	D.data3 = 0x22;									// 1 byte
	D.data4 = 0xABCD;								// 2 bytes. Total: 8 bytes

	printf("Memory address\tContent");
	printf("\n==============\t=======");

	//Trying to print this stuff byte by byte to know how it is placed in Memory
	uint8_t* pAddressOfData = (uint8_t*)&D; 		// Data type of this entity struct DATASET*
	uint32_t totalSize = sizeof(D);
	for(uint32_t i=0; i<totalSize; ++i){
		printf("\n%p\t%X", pAddressOfData, *pAddressOfData);
		++pAddressOfData;
	}
	printf("\nTotal memory consumed by this struct = %ubytes", totalSize);

	printf("\n\nPress Enter to exit");
	getchar();

	return 0;
}