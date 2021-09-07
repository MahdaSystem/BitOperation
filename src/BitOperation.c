#include "BitOperation.h"

uint8_t BitRead(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 1 : 0;
}

bool BitReadBool(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}

uint32_t BitWrite(uint32_t variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        return variable | (1 << bitPositionIndex);
    else
        return variable & ~(1 << bitPositionIndex);
}

void BitWritePtr(uint32_t* variable, uint8_t bitPositionIndex, uint8_t value) {
    if(value)
        *variable |= (1 << bitPositionIndex);
    else
        *variable &= ~(1 << bitPositionIndex);
}

uint32_t BitSet(uint32_t variable, uint8_t bitPositionIndex) {
    return variable | (1 << bitPositionIndex);
}

uint32_t BitReset(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & ~(1 << bitPositionIndex);
}

uint32_t IsBitSet(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? (1 << bitPositionIndex) : 0;
}

uint32_t IsBitReset(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? 0 : (1 << bitPositionIndex);
}

bool IsBitTrue(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? true : false;
}

bool IsBitFalse(uint32_t variable, uint8_t bitPositionIndex) {
    return variable & (1 << bitPositionIndex) ? false : true;
}
