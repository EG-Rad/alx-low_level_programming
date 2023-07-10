#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Determine the length of the string */
	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
		return (NULL);

	/* Copy the string into the duplicated memory */
	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
