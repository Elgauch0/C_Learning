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

void stack_push(Stack *stack, void *obj)
{

    if (stack->capacity == stack->count)
    {
        stack->capacity *= 2;

        void **temp = (void **)realloc(stack->data, sizeof(void *) * stack->capacity);
        if (!temp)
        {
            // echec de realloc
            stack->capacity /= 2;
            return;
        }
        stack->data = temp;
        temp = NULL;
    }

    stack->data[stack->count] = obj;
    stack->count++;
    return;
}

void *stack_pop(Stack *stack)
{

    if (stack->count == 0)
        return;

    stack->count--;
    return stack->data[stack->count];
}

void stack_free(Stack *stack)
{

    if (!stack)
        return;

    free(stack->data);
    free(stack);

    stack->data = NULL;
    stack = NULL;
}