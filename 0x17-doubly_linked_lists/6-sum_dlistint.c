#include "lists.h"
/**
 * sum_dlistint - sums all n
 * @head: head of node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum;

	if (current == NULL)
		return (0);

	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
