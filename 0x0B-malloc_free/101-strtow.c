#include <stdlib.h>

int get_word_count(char *str);
int get_word_length(char *str, int index);
char *copy_word(char *str, int start, int end);

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, word_index, i;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = get_word_count(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			int word_length = get_word_length(str, i);

			words[word_index] = copy_word(str, i - word_length + 1, i);

			if (words[word_index] == NULL)
			{
				while (word_index > 0)
					free(words[--word_index]);
				free(words);
				return (NULL);
			}
			word_index++;
			i += word_length;
		}
	}

	words[word_index] = NULL;

	return (words);
}

/**
 * get_word_count - Counts the number of words in a string.
 * @str: The string.
 *
 * Return: The number of words.
 */
int get_word_count(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * get_word_length - Calculates the length of a word in a string.
 * @str: The string.
 * @index: The starting index of the word.
 *
 * Return: The length of the word.
 */
int get_word_length(char *str, int index)
{
	int length = 0, i;

	for (i = index; str[i] != '\0' && str[i] != ' '; i++)
		length++;

	return (length);
}

/**
 * copy_word - Copies a word from a string into a new memory space.
 * @str: The string.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 *
 * Return: The copied word.
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 2));
	if (word == NULL)
		return (NULL);

	for (i = 0; start <= end; i++, start++)
		word[i] = str[start];
	word[i] = '\0';

	return (word);
}

