#include "main.h"
#include <stdio.h>
/**
 * **alloc_grid - return pointer to 2 dimentional array
 * @width - with of array
 * @height - height of array
 * Return: pointer if yes NULL if no
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);

		if (m[i] == NULL)
		{
			for (; i >= 0; x--)
				free(m[i]);
			free(m);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);
}
