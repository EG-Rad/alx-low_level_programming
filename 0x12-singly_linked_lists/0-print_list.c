#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int length;

	while (h != NULL)
	{
		length = 0;
		if (h->str != NULL)
		{
			while (h->str[length] != '\0')
				length++;
			printf("[%d] %s\n", length, h->str);
		}
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return (count);
}

