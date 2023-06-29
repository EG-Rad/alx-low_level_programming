#include "main.h"

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
