#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size to be allocated
 * Return: pointer if yes 98 if no
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		_putchar(98);
		return (NULL);
	}
	else
	{
		return (p);
	}
}
