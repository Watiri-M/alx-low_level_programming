#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @x: integer one
 * @y: integer two
 * Return: Null
 */

void swap_int(int *x, int *y)

{

	int swp = *x;

	*x = *y;

	*y = swp;

}
