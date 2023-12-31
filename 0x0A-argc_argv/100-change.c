#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - Calculates the minimum number of coins needed to make change.
 * @cents: The amount of cents to make change for.
 *
 * Return: The minimum number of coins.
 */
int min_coins(int cents)
{
int coins = 0;

	if (cents <= 0)
	return (0);

	while (cents >= 25)
	{
	cents -= 25;
	coins++;
	}

	while (cents >= 10)
	{
	cents -= 10;
	coins++;
	}

	while (cents >= 5)
	{
	cents -= 5;
	coins++;
	}

	while (cents >= 2)
	{
	cents -= 2;
	coins++;
	}

	while (cents >= 1)
	{
	cents -= 1;
	coins++;
	}

return (coins);
}

/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int cents, coins;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

coins = min_coins(cents);
printf("%d\n", coins);

return (0);
}

