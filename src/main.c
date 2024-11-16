#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "allocator.h"

int main() {
    mm_init();
    mm_print();
    char *a = mm_alloc(8192);
    printf("\n-Allocated 8192 bytes-------------------\n\n");
    mm_print();
    memcpy(a, "Hello world from allocated space.", 34);
    printf("0x%lx: %s\n", a, a);
    mm_free(a);
    printf("\n-Freed 8192 bytes-------------------\n\n");
    mm_print();
    mm_destroy();
    return 0;
}