#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - accepts arguments
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int argv1, argv2, result;
	char o;
	int (*func)(char *);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit (99);
	}

	o = *argv[2];
	if ((o == "/" || o == "%") && argv2 == 0)
	{
		printf("Error\n");
		exit (100);
	}

	result = func(argv1, argv2);
	printf("%d\n", result);
	return (0);
}
