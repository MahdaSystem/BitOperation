#ifndef _BITOPERATION_H
#define	_BITOPERATION_H

#include <stdint.h>
#include <stdbool.h>

typedef union Union_UInt32 {
	struct {
    uint8_t Part1;
    uint8_t Part2;
    uint8_t Part3;
    uint8_t Part4;
	};
	uint8_t Array[4];
	uint32_t Entity;
} Type_UInt32;
//--------------------------------------------------------------------------------
uint8_t BitRead32(uint32_t variable, uint8_t bitPositionIndex);
bool BitReadBool32(uint32_t variable, uint8_t bitPositionIndex);
uint32_t BitWrite32(uint32_t variable, uint8_t bitPositionIndex, uint8_t value);
void BitWritePtr32(uint32_t* variable, uint8_t bitPositionIndex, uint8_t value);
uint32_t BitSet32(uint32_t variable, uint8_t bitPositionIndex);
uint32_t BitReset32(uint32_t variable, uint8_t bitPositionIndex);
uint32_t IsBitSet32(uint32_t variable, uint8_t bitPositionIndex);
uint32_t IsBitReset32(uint32_t variable, uint8_t bitPositionIndex);
bool IsBitTrue32(uint32_t variable, uint8_t bitPositionIndex);
bool IsBitFalse32(uint32_t variable, uint8_t bitPositionIndex);
//--------------------------------------------------------------------------------
uint8_t BitRead16(uint16_t variable, uint8_t bitPositionIndex);
bool BitReadBool16(uint16_t variable, uint8_t bitPositionIndex);
uint16_t BitWrite16(uint16_t variable, uint8_t bitPositionIndex, uint8_t value);
void BitWritePtr16(uint16_t* variable, uint8_t bitPositionIndex, uint8_t value);
uint16_t BitSet16(uint16_t variable, uint8_t bitPositionIndex);
uint16_t BitReset16(uint16_t variable, uint8_t bitPositionIndex);
uint16_t IsBitSet16(uint16_t variable, uint8_t bitPositionIndex);
uint16_t IsBitReset16(uint16_t variable, uint8_t bitPositionIndex);
bool IsBitTrue16(uint16_t variable, uint8_t bitPositionIndex);
bool IsBitFalse16(uint16_t variable, uint8_t bitPositionIndex);
//--------------------------------------------------------------------------------
uint8_t BitRead8(uint8_t variable, uint8_t bitPositionIndex);
bool BitReadBool8(uint8_t variable, uint8_t bitPositionIndex);
uint8_t BitWrite8(uint8_t variable, uint8_t bitPositionIndex, uint8_t value);
void BitWritePtr8(uint8_t* variable, uint8_t bitPositionIndex, uint8_t value);
uint8_t BitSet8(uint8_t variable, uint8_t bitPositionIndex);
uint8_t BitReset8(uint8_t variable, uint8_t bitPositionIndex);
uint8_t IsBitSet8(uint8_t variable, uint8_t bitPositionIndex);
uint8_t IsBitReset8(uint8_t variable, uint8_t bitPositionIndex);
bool IsBitTrue8(uint8_t variable, uint8_t bitPositionIndex);
bool IsBitFalse8(uint8_t variable, uint8_t bitPositionIndex);
//--------------------------------------------------------------------------------
/**
 * @brief  Apply the behavior of ACTIVE LOW or ACTIVE HIGH on one bit.
 * @param  activeBitState: shows that the behavior is ACTIVE LOW or ACTIVE HIGH.
 * @param  bitState: shows that the value of bit. 'One' means 'Active' and 'Zero' means 'Deactive'.
 * @retval return the converted value.
 */
uint8_t ApplyActiveBitState(uint8_t activeBitState, uint8_t bitState);
#endif	/* _BITOPERATION_H */
