#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: Character a
 * @size: Character size
 */

void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += *(a + (size * i + i));
		y += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
