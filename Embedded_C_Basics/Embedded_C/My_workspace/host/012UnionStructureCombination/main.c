/*
 * main.c
 *
 *  Created on: May 4, 2020
 *      Author: VHS0104
 */

// Given a 32-bit packet, decode it as shown in the question
#include<stdio.h>
#include<stdint.h>

// Do not change the order of the elements if it's a requirement
union Packet
{
	uint32_t PacketContent;
	 struct{
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t long_addr	:8;
		uint32_t short_addr	:2;
		uint32_t addr_mode	:1;
	}PacketData;
};

void wait_for_the_input();

int main(){
//	uint32_t packetValue;			// Given Packet to Decode [1-2-8-3-3-12-1-2(LSB)]
	union Packet test;

	printf("Please Enter the packet Value in Hex: ");
	scanf(" %X", &test.PacketContent);

	printf("\ncrc \t\t: %#X", test.PacketData.crc);
	printf("\nstatus \t\t: %#X", test.PacketData.status);
	printf("\npayload \t: %#X", test.PacketData.payload);
	printf("\nbat \t\t: %#X", test.PacketData.bat);
	printf("\nsensor \t\t: %#X", test.PacketData.sensor);
	printf("\nlong_addr \t: %#X", test.PacketData.long_addr);
	printf("\nshort_addr \t: %#X", test.PacketData.short_addr);
	printf("\naddr_mode \t: %#X", test.PacketData.addr_mode);

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
