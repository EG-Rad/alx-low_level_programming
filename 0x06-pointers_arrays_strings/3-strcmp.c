#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return:
 *   - Negative integer if s1 is less than s2.
 *   - Positive integer if s1 is greater than s2.
 *   - Zero if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) 
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}

return (s1[i] - s2[i]);
}
