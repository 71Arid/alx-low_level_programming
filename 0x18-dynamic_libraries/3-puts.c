#include "main.h"
/**
 * _puts - prints to new line
 * @str: input
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
