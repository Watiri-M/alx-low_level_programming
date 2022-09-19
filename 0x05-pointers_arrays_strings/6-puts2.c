#include "main.h"



/**
 * puts2 - print every other chars of string
 * @str: character
 * Return: Void
 */

void puts2(char *str)

{

	int x;

	x = 0;

	while (str[x] != '\0')

	{

	if (x % 2 == 0)

	_putchar(str[x]);

	x++;

	}

	_putchar('\n');

}
