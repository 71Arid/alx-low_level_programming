#include "main.h"

/**
 * print_square - prints hashes squares
 * @size: size of square
 *
 * Return: no return
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < sizes; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
