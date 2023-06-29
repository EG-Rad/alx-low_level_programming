
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

/* Move the pointer to the end of the destination string */
while (*ptr != '\0') 
{
ptr++;
}

/* Copy the source string to the end of the destination string */
while (*src != '\0') 
{
*ptr = *src;
ptr++;
src++;
}

/* Add a terminating null byte */
*ptr = '\0';

return (dest);
}

