#include "main.h"
/**
 * *_memset - fills the first n bytes of the memeory area pointed to by @s with the constant byte @c
 * @s: a pointer to memory area to be filled
 * @c: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * description_memset: Over there
 *
 * Return: A pointer to the filled memory area @s
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *fill = s, value = b;

	for (index = 0: index < n; index++)
		fill[index] = value;

	return (memory);
}
