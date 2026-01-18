#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int determineWinner(int user, int computer);

int main()
{

    srand(time(NULL));
    int computer = (rand() % 3) + 1;
    int user = 0;

    printf("khtar ach bghiti\n");
    printf(" 1 for Scissors\n");
    printf(" 2 for Rock\n");
    printf(" 3 for Paper  \n");
    scanf("%d", &user);
    int result = determineWinner(user, computer);

    switch (result)
    {
    case 0:
        printf("égalité");
        break;
    case 1:
        printf("user wins");
        break;
    case -1:
        printf("computer wins");
        break;
    default:
        break;
    }
}

int determineWinner(int user, int computer)
{
    if (user == computer)
        return 0; // égalité

    // cas où l'utilisateur gagne
    if ((user == 1 && computer == 3) ||
        (user == 2 && computer == 1) ||
        (user == 3 && computer == 2))
    {
        return 1;
    }

    // sinon l'utilisateur perd
    return -1;
}
