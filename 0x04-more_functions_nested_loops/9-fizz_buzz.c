#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 1;

    do {
        if (i % 3 == 0 && i % 5 != 0)
            printf("Fizz ");
        else if (i % 3 != 0 && i % 5 == 0)
            printf("Buzz ");
        else if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else
            printf("%d ", i);

        i++;
    } while (i <= 100);

    printf("\n");

    return (0);
}

