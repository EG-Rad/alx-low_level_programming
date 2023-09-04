#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	mode_t mode;

	if (filename == NULL)
		return (-1);

	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_written = write(fd, text_content, _strlen(text_content));
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
size_t _strlen(char *s)
{
	size_t len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}

