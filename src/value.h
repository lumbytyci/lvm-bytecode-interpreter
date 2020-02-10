#ifndef lvm_value_h
#define lvm_value_h

#define value float

typedef struct {
    size_t capacity;
    value* values; 
} value_array;

void init_value_array(value_array *, size_t);

#endif
