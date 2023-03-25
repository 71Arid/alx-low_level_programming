#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: head node
 * @idx: index
 * @n: value of node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i;
	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (current != NULL)
			current->prev = new;
		new->next = current;
		*h = new;
		return (new);
	}
	for (i = 0; current != NULL && i < idx; i++)
		current = current->next;

	if (i != idx)
	{
		free(new);
		return (NULL);
	}

	new->prev = current->prev;
	new->next = current;
	if (current->prev != NULL)
		current->prev->next = new;
	current->prev = new;

	return (new);
} 
