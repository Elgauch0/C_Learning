#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();

int main()
{
    int random_1 = random();

    printf("random number: %d\n", random_1);

    return 0;
}

int random()
{
    srand(time(NULL));
    return rand() % 10;
}