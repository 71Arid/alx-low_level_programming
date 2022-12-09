#include <stdio.h>
/**
 * main - digit numbers from 0
 * Return: Always 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
