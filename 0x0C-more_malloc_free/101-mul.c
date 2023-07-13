#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
}

/**
 * is_digit - checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;

	while (*s && !is_digit(*s))
	{
	if (*s == '-')
	sign *= -1;
	s++;
	}
	while (*s && is_digit(*s))
	res = res * 10 + (*s++ - '0');

	return (sign * res);
}

/**
 * print_number - prints an integer to stdout
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n / 10)
	print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments passed to the program
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
int num1, num2, res;

int i, j;

if (argc != 3)
{
    _puts("Error\n");
    exit(98);
}
	for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j]; j++)
	if (!is_digit(argv[i][j]))
	{
	_puts("Error\n");
	exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;
	print_number(res);
	_putchar('\n');

return (0);
}

