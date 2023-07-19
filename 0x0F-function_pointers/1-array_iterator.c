#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Description: This function iterates over each element of the array and
 * executes the function pointed to by 'action' on each element.
 * 'array' must not be NULL, and 'action' must be a valid function pointer.
 * If 'array' or 'action' is NULL, the function has no effect.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
