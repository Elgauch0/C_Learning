#pragma once
#include <stddef.h>
#include <stdlib.h>

typedef struct
{
    size_t count;
    size_t capacity;
    void **data;
} Stack;

Stack *stack_new(size_t capacity)
{

    Stack *ptr = (Stack *)malloc(sizeof(Stack));
    if (!ptr)
        return NULL;

    ptr->count = 0;
    ptr->capacity = capacity;

    ptr->data = (void **)malloc(sizeof(void *) * capacity);
    if (!ptr->data)
    {
        free(ptr);
        ptr = NULL;
        return NULL;
    }

    return ptr;
}