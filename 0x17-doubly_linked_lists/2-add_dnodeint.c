#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint - adds node at begginning
* @head: head of node
* @n: value of new node
* Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = current;
	new->n = n;

	if (current != NULL)
		current->prev = new;

	*head = new;
	return (new);
}
