#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> 
#include <sys/stat.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
size_t _strlen(char *s);
int open_and_copy_file(const char *source, const char *destination);
void print_error_and_exit(const char *message, int exit_code);
int read_and_write_files(int fd_from, int fd_to);
int open_source_file(const char *source);
int open_destination_file(const char *destination, mode_t permissions);

#endif /* MAIN_H */
