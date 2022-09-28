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
	if (l < x)
	{
		return (x);
	}

	if (*s == *(s + l))
	{
		return (p1(s + x, l - 2));
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

	return (p1(s, len - 1));
}
