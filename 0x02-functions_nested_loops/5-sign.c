#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: character to be entered
 *
 * Return: 1 when n > 0, 0 when n is zero otherwise -1 is returned
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
