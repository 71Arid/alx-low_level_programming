#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *print_listint_safe - print listint_t
 *@head: pointer to a const struct
 *Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *check;
	size_t count = 0;

	current = head;
	while (current)
	{
		check = head;
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;

		while (check != current && check)
			check = check->next;

		if (check == current)
		{
			printf("->[%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (count);
}
