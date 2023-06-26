#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
int length = strlen(str);
int i;

for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}

