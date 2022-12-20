#include "main.h"
/**
 * rev_string - reverses string
 * @s: input
 * Return: reversed string
 */
void rev_string(char *s)
{
	char re = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		re = s[i];
		s[i] = s[c];
		s[c] = re;
	}
}
