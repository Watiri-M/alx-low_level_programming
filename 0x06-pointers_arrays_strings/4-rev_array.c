#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Character a
 * @n: Character n
 * Return: void
 */

void reverse_array(int *a, int n)

{

	int x;

	int y;

	x = 0;

	y = n - 1;

	while (x < y)

	{

	int i;

	i = a[x];

	a[x] = a[y];

	a[y] = i;
	x++;
	y--;
	}
}
