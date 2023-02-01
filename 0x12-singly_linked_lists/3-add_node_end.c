#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node_end - adds at end of list_t
  * @head: pointer to struct
  * @str: string
  * Return: address of newnode
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	while (str[len] != '\0')
		len++;
	newNode->len = len;
	newNode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (*head);
}
