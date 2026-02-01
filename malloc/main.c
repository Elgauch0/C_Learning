#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb = 0;
    printf("how many grades do u want ?\n");
    scanf("%d", &nb);

    char *grades = (char *)malloc(nb * sizeof(char));

    if (grades == NULL)
    {
        printf("no memory Left");
        return 1;
    }

    for (int i = 0; i < nb; i++)
    {
        printf("enter %d  grade : \n", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < nb; i++)
    {
        printf("your grade is %c \n", grades[i]);
    }

    free(grades);
    grades = NULL;
    return 0;
}