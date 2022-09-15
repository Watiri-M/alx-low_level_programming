#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Description: 'function that prints a triangle
 * Return: Void
 */

void print_triangle(int size)

{

	if (size <= 0)

	{

	_putchar('\n');

	}

	else

	{

	int i;

	i = 1;

	while (i <= size)

	{

	int spaces;

	int hash;

	spaces = size - i;
																					hash = i;
																					while (spaces > 0)
	{
	
	_putchar(' ');
	spaces--;

	}
																					while (hash > 0)
																					{
																					_putchar('#');
																					hash--;
																					}
																					_putchar('\n');
																					i++;
	}
	}
}
