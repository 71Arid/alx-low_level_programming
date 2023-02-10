#include "main.h"
/**
 * get_endianness - gets endianness
 * Return: 0 if big 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned int p = &i;
	char *c = (char *)p;

	return (*c == 1 ? 1 : 0);
}
