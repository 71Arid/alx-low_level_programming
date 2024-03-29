#include <stdlib.h>
#include "lists.h"
/**
  * free_listint2 - frees a listint_t list
  * @head: pointer to pointer to head
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
