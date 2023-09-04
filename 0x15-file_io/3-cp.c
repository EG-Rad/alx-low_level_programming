#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFSIZE 1024

int open_files(char *file_from, char *file_to, int *fd_from, int *fd_to);
void close_files(int fd_from, int fd_to);
void copy_file(int fd_from, int fd_to);

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, or one of the error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (open_files(argv[1], argv[2], &fd_from, &fd_to) != 0)
	{
		exit(1);
	}

	copy_file(fd_from, fd_to);

	close_files(fd_from, fd_to);

	return (0);
}

/**
 * open_files - opens the source and destination files
 * @file_from: the name of the source file
 * @file_to: the name of the destination file
 * @fd_from: a pointer to the file descriptor for the source file
 * @fd_to: a pointer to the file descriptor for the destination file
 *
 * Return: 0 on success, or one of the error codes on failure
 */
int open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	*fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(*fd_from);
		exit(99);
	}

	return (0);
}

/**
 * close_files - closes the source and destination files
 * @fd_from: the file descriptor for the source file
 * @fd_to: the file descriptor for the destination file
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * copy_file - copies the content of a file to another file
 * @fd_from: the file descriptor for the source file
 * @fd_to: the file descriptor for the destination file
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t n_read, n_written;
	char buffer[BUFSIZE];

	while ((n_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source\n");
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

