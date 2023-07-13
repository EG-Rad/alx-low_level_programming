#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string
 * NULL if allocation fails or if n is greater than or equal to s2 length
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, concat_len, i, j;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	/* Set n to s2 length if it is greater than or equal to s2 length */
	if (n >= s2_len)
		n = s2_len;

	/* Allocate memory for concatenated string */
	concat_len = s1_len + n;
	concat = malloc((concat_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concatenated string */
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	/* Copy n bytes from s2 to concatenated string */
	for (j = 0; j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);
}
