#include <stdlib.h>

#include "value.h"

void init_value_array(value_array *va, size_t initial_capacity) {
    va->capacity = initial_capacity;
    va->count = 0;
    va->values = malloc(sizeof(value) * initial_capacity);
}

int write_value_array(value_array *va, value val) {
    if (va->count + 1 > va->capacity) {
        /* Grow capacity logic */
    }

    va->values[va->count] = val;

    return va->count++;
}

void free_value_array(value_array *va) {
    va->capacity = 0;
    va->count = 0;
    free(va->values);
}
