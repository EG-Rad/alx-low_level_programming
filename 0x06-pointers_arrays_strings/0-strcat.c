#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
;
}
for (j = 0; src[j] != '\0'; j++) 
{
dest[i] = src[j];
i++;
}

dest[i] = '\0';

return (dest);
}

