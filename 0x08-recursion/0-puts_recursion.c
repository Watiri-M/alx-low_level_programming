#include "main.h"

/**
 * _puts_recursion - Prints a string follwed by an new line
 * @s: s character
 *
 * Return: Null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
