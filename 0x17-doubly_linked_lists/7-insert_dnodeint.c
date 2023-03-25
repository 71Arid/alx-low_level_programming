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
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		if (current != NULL)
			current->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; current != NULL && i < idx; i++)
		current = current->next;

	if (i == idx || current == NULL)
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
