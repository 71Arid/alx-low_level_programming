#include <stdio.h>
/**
 * main - functions alphabets
 * return: Always 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

/*prints lowercase letters*/
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}
	putchar('\n')
}
