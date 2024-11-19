#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "allocator.h"

int main() {
    mm_init();

    char *a = mm_alloc(50);
    mm_free(a);

    char *b = mm_alloc(0x10);
    char *c = mm_alloc(0x30);
    char *d = mm_alloc(0x400);
    char *e = mm_alloc(4096);

    mm_print();
    mm_destroy();
    return 0;
}