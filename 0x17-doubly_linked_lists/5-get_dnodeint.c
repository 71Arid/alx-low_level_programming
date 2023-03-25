#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node
 * @head - head node
 * @index: nth value
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (current == NULL)
		return (0);

	for (i = 0; current != NULL && i < index; i++)
	{
		if (current->next != NULL)
			current = current->next;
	}

	return (current);
}
