#include <stdio.h>

#include "lvm_common.h"
#include "value.h"

int main(int argc, char **argv) {
    
    value_array *va = malloc(sizeof(value_array));
    init_value_array(va, 16);

    write_value_array(va, 2.2);
    write_value_array(va, 2);
    write_value_array(va, -300);

    for(size_t i = 0; i < va->count; i++) {
        printf("%li | %g\n",i, va->values[i]);
    }

    free_value_array(va);


    return 0;
}

