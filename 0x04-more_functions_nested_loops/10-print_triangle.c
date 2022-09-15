#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Description: 'function that prints a triangle
 * Return: Void
 */

void print_triangle(int size)

{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
