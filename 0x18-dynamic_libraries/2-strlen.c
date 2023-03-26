#include "main.h"
/**
 * _strlen - get length of string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
