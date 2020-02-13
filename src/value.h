#ifndef lvm_value_h
#define lvm_value_h

#include <stddef.h>

#define value float

typedef struct {
    size_t capacity;
    int count;
    value* values; 
} value_array;

void init_value_array(value_array *, size_t);
int write_value_array(value_array *, value);

#endif
