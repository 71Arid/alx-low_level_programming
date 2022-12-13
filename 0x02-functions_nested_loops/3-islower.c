#include "main.h"
/**
 * _islower - checks is character is lower
 * @c: the character
 * Return: 1 if letter is lowercase, and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
