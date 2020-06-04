/*
 * main_new.c
 *
 *  Created on: Apr 24, 2020
 *      Author: VHS0104
 */

#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(){
	char* pAddress1;
	pAddress1 = (char*)&g_data;
	printf("Value at %p: %x", pAddress1, *pAddress1);

	char* pAddress2;
	pAddress2 = (char*)&g_data;
	printf("\nValue at %p: %x", pAddress2, *pAddress2);

	short* pAddress3;
	pAddress3 = (short*)&g_data;
	printf("\nValue at %p: %x", pAddress3, *pAddress3);

	int* pAddress4;
	pAddress4 = (int*)&g_data;
	printf("\nValue at %p: %x", pAddress4, *pAddress4);

	long long* pAddress5;
	pAddress5 = (long long*)&g_data;
	printf("\nValue at %p: %I64x", pAddress5, *pAddress5);

	return 0;
}