#include <stdlib.h>

void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: Pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_string - Prints a string.
 * @str: The string to be printed.
 */
void print_string(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

