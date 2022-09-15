#include "main.h"

/**
 * print_line - print line
 * @n: character
 * Description: function that draws a straight line in the terminal.
 * Return: Void
 */

void print_line(int n)

{

	while (n > 0)

	{

	_putchar('_');

	n--;

	}

	_putchar('\n');

}
