#include <stdlib.h>

int _putchar(char c);

/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;

	while (s[len])
	len++;

return (len);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 *
 * Return: pointer to the result of the multiplication
 */
char *mul(char *num1, char *num2)
{
int len1 = _strlen(num1), len2 = _strlen(num2), i, j;
char *res = malloc(len1 + len2 + 1);

	if (!res)
	return (NULL);

	for (i = 0; i < len1 + len2; i++)
	res[i] = '0';
	res[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
	if (!_isdigit(num1[i]))
	{
	free(res);
	return (NULL);
	}

	for (j = len2 - 1; j >= 0; j--)
	{
	if (!_isdigit(num2[j]))
	{
	free(res);
	return (NULL);
	}

	res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
	res[i + j] += res[i + j + 1] / 10;
	res[i + j + 1] %= 10;
	}
	}

	while (*res == '0' && *(res + 1))
	res++;

	return (res);
}

/**
 * main - entry point for program to multiply two positive numbers
 * @argc: number of arguments passed to program
 * @argv: array of arguments passed to program
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (98);
	}

	result = mul(argv[1], argv[2]);

	if (!result)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (98);
	}

	while (*result)
	_putchar(*result++ + '0');

	_putchar('\n');

	free(result);

	return (0);
}

