#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Desc: Prints all possible combinations of single-digit numbers.
 * Numbers are separated by ", " and printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar('0');

	for (int i = 1; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
