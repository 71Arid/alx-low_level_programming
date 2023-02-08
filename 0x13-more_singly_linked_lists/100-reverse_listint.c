#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverse listint_t
 * @head: pointer to pointer to struct
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
