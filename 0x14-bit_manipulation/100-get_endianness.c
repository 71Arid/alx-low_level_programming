#include "main.h"
/**
 * get_endianness - gets endianness
 * Return: 0 if big 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c == 1 ? 1 : 0);
}
