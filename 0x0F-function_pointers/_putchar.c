#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 * 
* Description: This function writes a single character to the standard output.
 * It uses the `write` system call from the unistd.h header
 * to perform the output
 * operation. The character to be written is passed as an argument to
 * the function.
 *
 * Return: On success, the function returns the number of characters written
 * (always 1 in this case). On error, it returns -1,
 * and the global variable `errno`
 * is set to indicate the specific error condition.
 */


void _putchar(char c)
{
        write(1, &c, 1);
}
