#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size of the allocated space in bytes
 * @new_size: New size of the memory block in bytes
 *
 * Return: Pointer to the reallocated memory block
 *         NULL if new_size is zero and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;
	char *old_ptr, *new_ptr_c;

	/* Handle special cases */
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	min_size = old_size;
	if (new_size < old_size)
		min_size = new_size;

	old_ptr = ptr;
	new_ptr_c = new_ptr;
	for (i = 0; i < min_size; i++)
		new_ptr_c[i] = old_ptr[i];

	free(ptr);

	return (new_ptr);
}
