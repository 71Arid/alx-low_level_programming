#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t linked list.
 *
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if succeeded, -1 otherwise.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (*head)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;

	if (current->next)
		current->next->prev = prev;

	free(current);

	return (1);
}

