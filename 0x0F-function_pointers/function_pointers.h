#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <unistd.h>

void _putchar(char c);
void print_name(char *name, void (*f)(char *));
void print_string(char *str);

#endif /* FUNCTION_POINTERS_H */
