#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[100];

    printf("Entre ton texte : ");

    // fgets lit TOUT, y compris le \n
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {

        // On enlève le \n si présent
        buffer[strcspn(buffer, "\n")] = '\0';

        printf("Tu as écrit : \"%s\"\n", buffer);
    }

    return 0;
}
