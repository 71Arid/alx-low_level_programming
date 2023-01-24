#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by \n
 *@separator: seperates numbers
 *@n: number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	va_start(ap, separator);

	for (i = 0; i < n; i++)
	{
		if (*separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%d", va_arg(ap, int));
			printf("%s", *separator);
		}
	}
	printf("\n");
}
