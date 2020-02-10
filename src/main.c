#include <stdio.h>

#include "lvm_common.h"
#include "value.h"

int main(int argc, char **argv) {
    
    value_array *va = malloc(sizeof(value_array));
    init_value_array(va, 16);

    free(va);
    va = NULL;

    return 0;
}
