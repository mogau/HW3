#include<sys/types.h>
#include<unistd.h>

#ifndef __VC_MALLOC__
#define __VC_MALLOC__
typedef struct s_block *s_block_ptr;

struct s_block{
    size_t size;
    struct s_block *next;
    struct s_block *prev;
    int free;
    void *ptr;
    char data[1];
};



void* mm_malloc(size_t size);
void *calloc(size_t number, size_t size);
void* mm_realloc(void *p, size_t size);
void *reallocf(void *p, size_t size);
void mm_free(void *p);

#endif
