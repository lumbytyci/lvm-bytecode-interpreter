#include "value.h"

void init_value_array(value_array *va, size_t initial_capacity) {
    va->capacity = initial_capacity;
    va->values = malloc(sizeof(value) * initial_capacity));
}
