#include <stdlib.h>

int _putchar(char c);

/**
 * print_name - Prints a name.
 * @name: Pointer to the name string.
 * @f: Function pointer to a function that takes a char pointer.
 *
 * Description: This function invokes the function pointed
 * by @f and passes @name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

/**
 * print_string - Prints a string.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints the string
 * @str followed by a newline character.
 */
void print_string(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
