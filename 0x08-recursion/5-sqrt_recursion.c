#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number
 * or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @guess: The current guess value for the square root.
 *
 * Return: The natural square root of the number
 * or -1 if it doesn't have a natural square root.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (sqrt_helper(n, guess + 1));
}
