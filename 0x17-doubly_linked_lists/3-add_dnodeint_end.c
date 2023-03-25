#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head node
 * @n: value for new node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (current == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	new->prev = current;
	current->next = new;
	return (new);
}
