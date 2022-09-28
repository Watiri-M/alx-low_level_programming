#include "main.h"

/**
 * _strlen_recursion - string
 * @s: s character
 *
 * Return: 1 if its a string or 0 if not
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pd - palindrome
 * @s: s character
 * @x: x character
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int pd(char *s, int x)
{
	if (x < 1)
	{
		return (1);
	}

	if (*s == *(s + x))
	{
		return (pd(s + 1, x - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: s character
 * Return: number
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pd(s, len - 1));
}
