#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Recursive helper function to check if a num is prime.
 * @n: The number to check.
 * @divisor: The current divisor to check for divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 1));
}
