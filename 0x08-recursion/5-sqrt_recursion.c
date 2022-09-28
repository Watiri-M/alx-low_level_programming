#include "main.h"

/**
 * _sqrt -Returns the square root of a number
 * @n: n character
 * @y: y character
 *
 * Return: natural square root of a number
 */
int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - Returns to the main program in _sqrt()
 * @n: n character
 *
 * Return: number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
