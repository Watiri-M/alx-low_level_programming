#include "main.h"

/**
 * print_diagonal - print diagonal
 * Description : function that draws a diagonal line on the terminal.
 * @n: character
 * Return: Void
 */

void print_diagonal(int n)

{

	if (n <= 0)

	_putchar('\n');

	else

	{

	int i;


	for (i = 0; i < n; i++)

	{

	int j;

	for (j = 0; j < n; j++)

	{
		if (i == j)

			_putchar('\\');

		else
			_putchar(' ');

	}
	_putchar('\n');
	}
}
}
