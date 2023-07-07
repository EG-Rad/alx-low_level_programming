#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Returns the result of multiplying two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int multiply(int a, int b)
{
	return (a * b);
}

/**
 * main - Multiplies two numbers provided as command-line arguments
 * and prints the result.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}

