#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *current = *head;
	listint_t *previous = NULL;

	while (current != NULL)
	{
		if (count == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}

		previous = current;
		current = current->next;
		count++;
	}

	return (-1);
}
