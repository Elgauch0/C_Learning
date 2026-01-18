#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom();

int main()
{

    srand(time(NULL));

    int x = getRandom();
    int u = 0;
    printf("%d\n", x);

    printf("bienvenue au jeu  nombre magic  \n");

    while (x != u)
    {
        printf("entrez un nombre entre 0 et 100 !\n");
        scanf("%d", &u);
        if (x > u)
        {
            printf("plus grand encore \n");
        }
        else if (x < u)
        {
            printf("plus petit  encore \n");
        }
        else
        {
            printf("bingo vous avez réussi \n");
        }
    }

    return 0;
}

int getRandom()
{
    return rand() % 101;
}