#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added
 * @n: The value to set in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
