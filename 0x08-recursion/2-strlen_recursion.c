#include "main.h"

/**
 * _strlen_recursion - Gives length of a string
 * @s: s character
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
