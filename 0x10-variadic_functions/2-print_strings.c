#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The variable number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
			str = "(nil)";

		while (*str)
			_putchar(*str++);

		if (separator != NULL && i < n - 1)
		{
			while (*separator)
				_putchar(*separator++);
		}
	}

	_putchar('\n');

	va_end(args);
}
