/*
 * main_new.c
 *
 *  Created on: Apr 24, 2020
 *      Author: VHS0104
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input();

int main(){
	// Applicability of Bitwise operators: Testing of bits(&)
	// Testing the LSB of any number to see if a number is odd/even
	int32_t num;
	int32_t mask = 0x90;									//0x010010000
	
	printf("Enter a number: ");
	scanf("%d", &num);

	num = num | mask;
	printf("4th and 7th bits are now 1: 0x%x", num);
	
	wait_for_user_input();

	return 0;
}

void wait_for_user_input(){
	while(getchar()!='\n'){
		}
	printf("\nPress Enter key to end!");
	getchar();
}
