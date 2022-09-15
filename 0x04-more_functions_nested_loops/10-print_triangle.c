#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Description: 'function that prints a triangle
 * Return: Void
 */

void print_triangle(int size)

{

	if (size < 1)
		_putchar('\n');
	else
	{
		int length = 1;

		do {

			int i = 1;

		for (; i <= size; i++)
		{
			if (i > (size - length))

				_putchar('#');
			else
				_putchar(' ');
		}
			_putchar('\n');
			length++;
		} while (length <= size);
	}
}
