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
 * Return: The sum of the numbers, or -1 if a non-digit character
 * is encountered.
 */
int add_numbers(const char **numbers, int count)
{
int sum = 0;
int i, j;
const char *current_number;

for (i = 0; i < count; i++)
{
current_number = numbers[i];
j = 0;

while (current_number[j] != '\0')
{
if (current_number[j] < '0' || current_number[j] > '9')
return (-1);
j++;
}

sum += atoi(current_number);
}

return (sum);
}

/**
 * main - Adds positive numbers provided as command-line argument
 * and prints the result.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int result;

if (argc == 1)
{
printf("0\n");
return (0);
}

result = add_numbers((const char **)(argv + 1), argc - 1);

if (result == -1)
{
printf("Error\n");
return (1);
}

printf("%d\n", result);

return (0);
}

