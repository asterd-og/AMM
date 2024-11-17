#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "allocator.h"

int main() {
    mm_init();

    char *a = mm_alloc(30);
    printf("\n-Allocated 30 bytes-------------------\n\n");
    mm_print();
    memcpy(a, "Hello world from allocator.", 28);
    printf("0x%lx: %s\n", a, a);

    char *b = mm_alloc(30);
    printf("\n-Allocated 30 bytes-------------------\n\n");
    mm_print();
    memcpy(b, "Hello world from allocator2.", 29);
    printf("0x%lx: %s\n", b, b);

    mm_free(a);
    printf("\n-Freed 30 bytes-------------------\n\n");
    mm_print();
    mm_free(b);
    printf("\n-Freed 30 bytes-------------------\n\n");
    mm_print();
    mm_destroy();
    return 0;
}