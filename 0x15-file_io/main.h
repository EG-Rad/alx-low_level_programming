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
int open_files(char *file_from, char *file_to, int *fd_from, int *fd_to);
void close_files(int fd_from, int fd_to);
void copy_file(int fd_from, int fd_to);

#endif /* MAIN_H */
