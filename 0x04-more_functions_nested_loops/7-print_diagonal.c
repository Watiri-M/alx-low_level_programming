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
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i < n)
		{
			int draw;

			draw = i;
			while (draw > 0)
			{
				_putchar(' ');
				draw--;
			}

			_putchar('\\');
			_putchar('\n');

			i++;
		}
	}
}
