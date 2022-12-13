#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char al;
	int y;

	for (y = 0; y <= 10; y++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
