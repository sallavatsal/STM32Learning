/*
 * main.c
 *
 *  Created on: Apr 24, 2020
 *      Author: VHS0104
 */
#include<stdio.h>

int main(){
	char var = 100;
	char* pVar = &var;
	char var2;

	printf("Address of var = %p", &var);
	var2 = *pVar;				// Dereferencing pVar and storing it to var2
	printf("\nValue of var2 = %d", var);
	*pVar = 65;
	printf("\nValue of var = %d", var);

	return 0;
}
