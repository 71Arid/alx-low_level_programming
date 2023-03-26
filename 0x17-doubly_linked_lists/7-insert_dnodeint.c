#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: value to be stored in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (current_node != NULL && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
	{
		current_node->next->prev = new_node;
	}
	current_node->next = new_node;

	return (new_node);
}
