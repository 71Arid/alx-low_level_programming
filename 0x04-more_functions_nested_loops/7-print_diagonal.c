#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: line length
 *
 * Return: nothing on success
 */
void print_diagonal(int n)
{
	int count = 0;
	int start = 0;
	int end;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			end = count;
			while (start <= end)
			{
				if (start == end)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			count++;
		}
	}
}
