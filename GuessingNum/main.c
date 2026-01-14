#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int lower, int upper);

int main()
{
    srand(time(NULL));
    int lower = 1, upper = 100;
    int randomNumber = getRandomNumber(lower, upper);
    int userGuess = 0;

    while (userGuess != randomNumber)
    {
        printf("Guess a number between %d and %d: ", lower, upper);
        scanf("%d", &userGuess);

        if (userGuess < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (userGuess > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d correctly!\n", randomNumber);
        }
    }
    return 0;
}

int getRandomNumber(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}