#include <string.h>

#include "main.h"



/**
 * print_rev - prints a string in reversed order
 * @str: character
 * Return: Void
 */

void print_rev(char *str)

{

	int i, s = strlen(str);

	for (i = s - 1; i >= 0; i--)

	_putchar(str[i]);

	_putchar('\n');

}
