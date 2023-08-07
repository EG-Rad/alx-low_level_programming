#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, count = 0;

	if (str == NULL || str[0] == '\0')
	return (NULL);
	for (i = 0; str[i]; i++)
	if (str[i] != ' ')
	break;
	if (str[i] == '\0')
	return (NULL);
	for (i = 0; str[i]; i++)
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	count++;
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	return (NULL);
	for (i = 0, j = 0; i < count; i++)
	{
	while (str[j] == ' ')
	j++;
	for (k = j; str[k] && str[k] != ' '; k++)
	;
	words[i] = malloc(k - j + 1);
	if (words[i] == NULL)
	{
	for (; i >= 0; i--)
	free(words[i]);
	free(words);
	return (NULL);
	}
	for (l = 0; j < k; j++, l++)
	words[i][l] = str[j];
	words[i][l] = '\0';
	}
	words[count] = NULL;
	return (words);
}


