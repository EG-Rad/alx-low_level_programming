#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
char temp;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Reverse the string */
while (start < length - 1)
{
temp = s[start];
s[start] = s[length - 1];
s[length - 1] = temp;
start++;
length--;
}
}

