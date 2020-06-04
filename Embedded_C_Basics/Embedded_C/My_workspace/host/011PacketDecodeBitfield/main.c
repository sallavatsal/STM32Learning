/*
 * main.c
 *
 *  Created on: Apr 30, 2020
 *      Author: VHS0104
 */

// Given a 32-bit packet, decode it as shown in the question
#include<stdio.h>
#include<stdint.h>

// Do not change the order of the elements if it's a requirement
typedef struct{
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t long_addr	:8;
	uint32_t short_addr	:2;
	uint32_t addr_mode	:1;
}BitPacket;

void wait_for_the_input();

int main(){
	uint32_t packet;			// Given Packet to Decode [1-2-8-3-3-12-1-2(LSB)]
	BitPacket test;

	printf("Please Enter the packet Value in Hex: ");
	//fflush(stdout);
	scanf(" %X", &packet);

	test.crc = 0;
	test.status = 0;
	test.payload = 0;
	test.bat = 0;
	test.sensor = 0;
	test.long_addr = 0;
	test.short_addr = 0;
	test.addr_mode = 0;

	test.crc = (uint8_t) ((packet)&0x3);
	test.status = (uint8_t) ((packet>>2)&0x1);
	test.payload = (uint16_t) ((packet>>3)&0xFFF);
	test.bat = (uint8_t) ((packet>>15)&0x7);
	test.sensor = (uint8_t) ((packet>>18)&0x7);
	test.long_addr = (uint8_t) ((packet>>21)&0xFF);
	test.short_addr = (uint8_t) ((packet>>29)&0x3);
	test.addr_mode = (uint8_t) ((packet>>31)&0x1);

	printf("\ncrc \t\t: %#X", test.crc);
	printf("\nstatus \t\t: %#X", test.status);
	printf("\npayload \t: %#X", test.payload);
	printf("\nbat \t\t: %#X", test.bat);
	printf("\nsensor \t\t: %#X", test.sensor);
	printf("\nlong_addr \t: %#X", test.long_addr);
	printf("\nshort_addr \t: %#X", test.short_addr);
	printf("\naddr_mode \t: %#X", test.addr_mode);

	printf("\nSize of structure is %u bytes", sizeof(test));

	printf("\n\nPress Enter to Exit");
	wait_for_the_input();

	return 0;
}

void wait_for_the_input(){
	while(getchar() != '\n'){

	}
	getchar();
}