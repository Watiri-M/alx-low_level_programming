#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @col: number of columns
 * @row: number of rows
 *
 * Return: a pointer to a 2D array
 */
int **alloc_grid(int col, int row)
{
	int x, y,  **z;

	z = malloc(row * sizeof(*z));

	if (row < 1 || col < 1 || z == 0)
		return (NULL);

	for (x = 0; x < row; x++)
	{
		z[x] = malloc(col * sizeof(**z));
		if (z[x] == 0)
		{
			while (x--)
				free(z[x]);
			free(z);
			return (NULL);
		}
		for (y = 0; y < col; y++)
			z[x][y] = 0;
	}

	return (z);
}
