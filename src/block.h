#ifndef lvm_block_h
#define lvm_block_h

#include "lvm_common.h"

typedef struct {
    int ip;
    int size;
    uint8_t *bytes;    
} block;

#endif
