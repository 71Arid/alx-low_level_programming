#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees dlist
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = *head, *temp = NULL;

	while(current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
