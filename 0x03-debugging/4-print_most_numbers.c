#include "main.h"

/**
 * print_most_numbers - prints numnbers between 0 and 9
 * (neither 2 or 4)
 * Return: no return
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
		_putchar('\n');
}
