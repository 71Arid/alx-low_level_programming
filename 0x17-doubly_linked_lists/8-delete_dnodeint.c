#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node
 * @head: head of list
 * @index: index
 * Return: 1 if yes -1 if no
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head == NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL || i != index)
		return (-1);

	prev->next = current->next;
	if (current->next)
		current->next->prev = prev;
	free(current);
	return (1);
}
