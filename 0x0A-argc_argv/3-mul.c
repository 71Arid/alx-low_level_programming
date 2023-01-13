#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes arguments
 * @argc: counts arguments
 * @argv: pointer to array of strings
 * Return: mult if two arguments and 1 if not
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mult *= atoi(argv[i]);

		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
