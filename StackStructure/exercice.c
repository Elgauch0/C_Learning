#include <stdlib.h>
#include "stack.h"
#include <string.h>

int main()
{
}

void dangerous_push(Stack *stack)
{
    stack_push(stack, (void *)1337); // pushing a int instead of an adress
    int *ptr = malloc(sizeof(int));
    if (!ptr)
        return;
    *ptr = 1024;
    stack_push(stack, ptr); // pushing adress
}

void stack_multiple_push(Stack *stack) // dangerous too
{
    float *fptr = (float *)malloc(sizeof(float));
    *fptr = 3.14;
    stack_push(stack, fptr);

    char *string = "Sneklang is blazingly slow!\0";
    int length = strlen(string);

    char *cptr = malloc(sizeof(char) * length);

    strcpy(cptr, string);
    stack_push(stack, cptr);
    return;
}