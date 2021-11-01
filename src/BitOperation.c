#include "BitOperation.h"

uint8_t BitRead32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 1 : 0;
}
bool BitReadBool32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}
uint32_t BitWrite32(uint32_t variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        return variable | (1 << bitPositionIndex);
    else
        return variable & ~(1 << bitPositionIndex);
}
void BitWritePtr32(uint32_t* variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        *variable |= (1 << bitPositionIndex);
    else
        *variable &= ~(1 << bitPositionIndex);
}
uint32_t BitSet32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable | (1 << bitPositionIndex);
}
uint32_t BitReset32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & ~(1 << bitPositionIndex);
}
uint32_t IsBitSet32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? (1 << bitPositionIndex) : 0;
}
uint32_t IsBitReset32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 0 : (1 << bitPositionIndex);
}
bool IsBitTrue32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}
bool IsBitFalse32(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? false : true;
}
//--------------------------------------------------------------------------------
uint8_t BitRead16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 1 : 0;
}
bool BitReadBool16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}
uint16_t BitWrite16(uint16_t variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        return variable | (1 << bitPositionIndex);
    else
        return variable & ~(1 << bitPositionIndex);
}
void BitWritePtr16(uint16_t* variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        *variable |= (1 << bitPositionIndex);
    else
        *variable &= ~(1 << bitPositionIndex);
}
uint16_t BitSet16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable | (1 << bitPositionIndex);
}
uint16_t BitReset16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & ~(1 << bitPositionIndex);
}
uint16_t IsBitSet16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? (1 << bitPositionIndex) : 0;
}
uint16_t IsBitReset16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 0 : (1 << bitPositionIndex);
}
bool IsBitTrue16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}
bool IsBitFalse16(uint16_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? false : true;
}
//--------------------------------------------------------------------------------
uint8_t BitRead8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 1 : 0;
}
bool BitReadBool8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}
uint8_t BitWrite8(uint8_t variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        return variable | (1 << bitPositionIndex);
    else
        return variable & ~(1 << bitPositionIndex);
}
void BitWritePtr8(uint8_t* variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        *variable |= (1 << bitPositionIndex);
    else
        *variable &= ~(1 << bitPositionIndex);
}
uint8_t BitSet8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable | (1 << bitPositionIndex);
}
uint8_t BitReset8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & ~(1 << bitPositionIndex);
}
uint8_t IsBitSet8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? (1 << bitPositionIndex) : 0;
}
uint8_t IsBitReset8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 0 : (1 << bitPositionIndex);
}
bool IsBitTrue8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}
bool IsBitFalse8(uint8_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? false : true;
}
//--------------------------------------------------------------------------------
uint8_t ApplyActiveBitState(uint8_t activeBitState, uint8_t bitState) {
  if(activeBitState == 0)
    return bitState == 0 ? 1 : 0;
  else
    return bitState == 0 ? 0 : 1;
}
