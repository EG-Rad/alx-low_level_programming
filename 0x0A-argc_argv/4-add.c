#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive - Checks if a string represents a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */
int is_positive(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] < '0' || str[i] > '9')
	return (0);
	i++;
	}

	return (1);
}

/**
 * add_numbers - Adds an array of positive numbers.
 * @numbers: The array of numbers to add.
 * @count: The number of elements in the array.
 *
 * Return: The sum of the numbers.
 */
int add_numbers(const char *numbers[], int count)
{
int sum = 0;
int i;

	for (i = 0; i < count; i++)
	{
	sum += atoi(numbers[i]);
	}

	return (sum);
}

/**
 * main - Adds positive numbers provided as command-line arguments
 * and prints the result.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	if (!is_positive(argv[1]))
	{
	printf("Error\n");
	return (1);
	}

int result = add_numbers(argv + 1, argc - 1);

printf("%d\n", result);

	return (0);
}
