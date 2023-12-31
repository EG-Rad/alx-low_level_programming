#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: Data (n) of the head node, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (data);
}

