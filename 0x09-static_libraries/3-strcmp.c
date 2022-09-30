#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)

{

	int x = 0, y = 0;

	while (x == 0)

	{

	if (*(s1 + y) == '\0' && *(s2 + y) == '\0')

	break;

	x = *(s1 + y) - *(s2 + y);

	y++;

	}

	return (x);

}
