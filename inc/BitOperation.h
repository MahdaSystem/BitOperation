#ifndef _BITOPERATION_H
#define	_BITOPERATION_H

#include <stdint.h>
#include <stdbool.h>

uint8_t BitRead(uint32_t variable, uint8_t bitPositionIndex);
bool BitReadBool(uint32_t variable, uint8_t bitPositionIndex);
uint32_t BitWrite(uint32_t variable, uint8_t bitPositionIndex, uint8_t value);
void BitWritePtr(uint32_t* variable, uint8_t bitPositionIndex, uint8_t value);
uint32_t BitSet(uint32_t variable, uint8_t bitPositionIndex);
uint32_t BitReset(uint32_t variable, uint8_t bitPositionIndex);
uint32_t IsBitSet(uint32_t variable, uint8_t bitPositionIndex);
uint32_t IsBitReset(uint32_t variable, uint8_t bitPositionIndex);
bool IsBitTrue(uint32_t variable, uint8_t bitPositionIndex);
bool IsBitFalse(uint32_t variable, uint8_t bitPositionIndex);

#endif	/* _BITOPERATION_H */
