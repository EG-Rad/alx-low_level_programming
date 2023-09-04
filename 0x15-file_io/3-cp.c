#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

int open_and_copy_file(const char *source, const char *destination);
void print_error_and_exit(const char *message, int exit_code);
int read_and_write_files(int fd_from, int fd_to);
int open_source_file(const char *source);
int open_destination_file(const char *destination, mode_t permissions);

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to\n", 97);
	}

	if (open_and_copy_file(argv[1], argv[2]) != 0)
	{
		return (1);
	}

	return (0);
}

/**
 * open_and_copy_file - Opens and copies content from one file to another.
 * @source: The name of the source file.
 * @destination: The name of the destination file.
 *
 * Return: 0 on success, or an error code on failure.
 */
int open_and_copy_file(const char *source, const char *destination)
{
	int fd_from, fd_to;

	fd_from = open_source_file(source);

	fd_to = open_destination_file(destination,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_from == -1 || fd_to == -1)
	{
		return (1);
	}

	if (read_and_write_files(fd_from, fd_to) != 0)
	{
		return (1);
	}

	close(fd_from);
	close(fd_to);

	return (0);
}

/**
 * read_and_write_files - Reads from the source file
 * and writes to the destination file.
 * @fd_from: File descriptor for the source file.
 * @fd_to: File descriptor for the destination file.
 *
 * Return: 0 on success, or an error code on failure.
 */
int read_and_write_files(int fd_from, int fd_to)
{
	ssize_t read_result, write_result;
	char buffer[1024];

	while ((read_result = read(fd_from, buffer, 1024)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			print_error_and_exit("Error: Can't write to file", 99);
		}
	}

	if (read_result == -1)
	{
		print_error_and_exit("Error: Can't read from file", 98);
	}

	return (0);
}

/**
 * open_source_file - Opens the source file for reading.
 * @source: The name of the source file.
 *
 * Return: File descriptor of the source file, or -1 on failure.
 */
int open_source_file(const char *source)
{
	int fd_from = open(source, O_RDONLY);

	if (fd_from == -1)
	{
		print_error_and_exit("Error: Can't read from file", 98);
	}
	return (fd_from);
}

/**
 * open_destination_file - Opens the destination file for writing.
 * @destination: The name of the destination file.
 * @permissions: File permissions to set for the destination file.
 *
 * Return: File descriptor of the destination file, or -1 on failure.
 */
int open_destination_file(const char *destination, mode_t permissions)
{
	int fd_to = open(destination, O_CREAT | O_WRONLY | O_TRUNC, permissions);

	if (fd_to == -1)
	{
		print_error_and_exit("Error: Can't write to file", 99);
	}
	return (fd_to);
}

/**
 * print_error_and_exit - Prints an error message and exits with a given code.
 * @message: The error message.
 * @exit_code: The exit code.
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

