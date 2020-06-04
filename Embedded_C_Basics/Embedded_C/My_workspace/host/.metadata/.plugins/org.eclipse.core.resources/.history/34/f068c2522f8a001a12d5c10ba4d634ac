/*
 * marown.c
 *
 *  Created on: Apr 28, 2020
 *      Author: VHS0104
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input();
int main(){
	int row, col, height;

	printf("Enter pyramid height: ");
	fflush(stdout);
	scanf("%d", &height);

	for(row=1; row<=height; ++row){
		for(col=row; col>0; --col){
			printf("%d ", col);
		}
		printf("\n");
	}
	wait_for_user_input();

	return 0;
}

void wait_for_user_input(){
	while(getchar()!='\n');
	printf("Press Enter to exit this application");
	getchar();
}
