#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node
 * @head: head node
 * @index: nth value
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (i != index || current == NULL)
		return (0);

	return (current);
}
