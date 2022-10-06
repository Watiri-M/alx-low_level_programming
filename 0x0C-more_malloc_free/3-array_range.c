#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int range, x = 0,  *pnt;

	if (min > max)
		return (NULL);

	range  = max - min;
	pnt = malloc((range + 1) * sizeof(*pnt));

	if (pnt == NULL)
		return (NULL);

	for (range = min; range <= max; range++)
		pnt[x++] = range;
	return (pnt);
}
