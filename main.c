#include <stdio.h>

int main()
{
    char choice = ' ';
    float Celsius = 0.0f, Fahrenheit = 0.0f;

    printf("Enter C to convert Celsius to Fahrenheit or F to convert Fahrenheit to Celsius: ");
    scanf(" %c", &choice); // Note the space before %c to consume any leftover whitespace in the input buffer .

    if (choice == 'C' || choice == 'c')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &Celsius);

        Fahrenheit = (Celsius * 9.0f / 5.0f) + 32.0f;

        printf("%.2f Celsius is %.2f Fahrenheit\n", Celsius, Fahrenheit);
        return 0;
    }

    if (choice == 'F' || choice == 'f')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &Fahrenheit);

        Celsius = (Fahrenheit - 32.0f) * 5.0f / 9.0f;

        printf("%.2f Fahrenheit is %.2f Celsius\n", Fahrenheit, Celsius);
        return 0;
    }

    printf("Invalid choice. Please enter C or F.\n");
    return 0;
}
