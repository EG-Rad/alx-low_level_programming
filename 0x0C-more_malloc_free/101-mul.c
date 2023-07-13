#include <stdlib.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, the character written is returned.
 *         On error, (-1) is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str);

/**
 * _isdigit - Checks if a string contains only digits.
 * @str: The input string.
 *
 * Return: (1) if the string contains only digits, (0) otherwise.
 */
int _isdigit(char *str);

/**
 * print_error - Prints an error message.
 */
void print_error(void);

/**
 * print_number - Prints a number.
 * @number: The number to be printed.
 */
void print_number(char *number);

/**
 * multiply - Multiplies two numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: (0) on success, (98) on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		print_error();
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _isdigit - Checks if a string contains only digits.
 * @str: The input string.
 *
 * Return: (1) if the string contains only digits, (0) otherwise.
 */
int _isdigit(char *str)
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
 * print_error - Prints an error message.
 */
void print_error(void)
{
	char *error_msg = "Error\n";
	int len = _strlen(error_msg);
	int i;

	for (i = 0; i < len; i++)
		_putchar(error_msg[i]);
}

/**
 * print_number - Prints a number.
 * @number: The number to be printed.
 */
void print_number(char *number)
{
	int len = _strlen(number);
	int i;

	for (i = 0; i < len; i++)
		_putchar(number[i]);
}

/**
 * multiply - Multiplies two numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int *result = malloc(sizeof(int) * len_result);
	int i, j, carry, digit;

	for (i = 0; i < len_result; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = digit / 10;
			result[i + j + 1] = digit % 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (i < len_result - 1 && result[i] == 0)
		i++;

	for (; i < len_result; i++)
		_putchar(result[i] + '0');

	_putchar('\n');

	free(result);
}

