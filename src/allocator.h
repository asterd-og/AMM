/*

Memory allocator written by: Astrido

*/

#pragma once

#include <stdint.h>
#include <stddef.h>

void mm_init();
void *mm_alloc(size_t size);
void mm_free(void *ptr);
void mm_print();
void mm_destroy();
