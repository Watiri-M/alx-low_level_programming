#include "main.h"

void print(unsigned int d);

/**
 * print_number - print number
 * @n: character
 * Return: void
 */

void print_number(int n)

{

	if (n < 0)

	{

	_putchar('-');

	n = n * -1;

	}

	print(n);

}

/**
 * print - print
 * @x: character
 */

void print(unsigned int x)

{

	if (x / 10)

	print(x / 10);

	_putchar('0'  + x % 10);

}
