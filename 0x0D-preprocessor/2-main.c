#include "2-main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *filename = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		_putchar(filename[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
