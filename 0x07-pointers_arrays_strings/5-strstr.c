#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: Character haystack
 * @needle: Character needle
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *x = haystack, *y = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (x);
		}
		needle = y;
		x++;
		haystack = x;
	}
	return (0);
}
