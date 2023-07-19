#include "function_pointers.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_name - prints a name using a function pointer
 * @name: The name to print
 * @f: Pointer to a function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_name_as_is - prints a name as is
 * @name: The name to print
 */
void print_name_as_is(char *name)
{
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: The name to print
 */
void print_name_uppercase(char *name)
{
	while (*name)
	{
		if (*name >= 'a' && *name <= 'z')
			_putchar(*name + 'A' - 'a');
		else
			_putchar(*name);
		name++;
	}
	_putchar('\n');
}

