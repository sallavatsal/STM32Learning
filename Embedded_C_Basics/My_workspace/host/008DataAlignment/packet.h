/*
 * packet.h
 *
 *  Created on: Apr 29, 2020
 *      Author: VHS0104
 */

#ifndef PACKET_H_
#define PACKET_H_

struct DATASET{
	uint8_t data1;
	uint32_t data2;
	uint8_t data3;
	uint16_t data4;
}__attribute__((packed));

#endif /* PACKET_H_ */