/*
 * main.c
 *
 *  Created on: Apr 23, 2020
 *      Author: VHS0104
 */
#include<stdio.h>

int main(){
	float _a1, _a2, _a3;
	float average;

	printf("Enter first number: ");
	fflush(stdout);
	scanf("%f %f %f", &_a1, &_a2, &_a3);

	average = (_a1+_a2+_a3)/3;
	printf("\nAverage = %f", average);

	printf("\nPress Enter to exit");
	while(getchar() != '\n')
	{

	}
	getchar();

	return 0;
}