#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for integer
 *@size: number of array elements
 *@array: the array
 *@cmp: pointer to compare function
 *Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; size++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
