#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers are separated by ", " and printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;

    while (i < 9)
    {
        if (i > 0)
        {
            putchar(',');
            putchar(' ');
        }
        putchar('0' + i);
        i++;
    }

    putchar('\n');

    return 0;
}

