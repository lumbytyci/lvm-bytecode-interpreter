#ifndef lvm_block_h
#define lvm_block_h

#include "lvm_common.h"

typedef struct {
    int ip;
    int size;
    uint8_t *bytes;    
} block;

void init_block(block *b);
void write_block(block *b, uint8_t byte);
void free_block(block *b);

#endif
