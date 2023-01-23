#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all arguments
 *@n: first argument
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = n;

	if (n == 0)
		return (0);

	va_list = ap;
	va_start(ap, n);

	while (i = va_args(ap, int))
	{
		sum += i;
		i++;
	}
	return (sum);
}

