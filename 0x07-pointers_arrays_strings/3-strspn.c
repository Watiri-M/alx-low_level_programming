#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: Character s
 * @accept: Character accept
 *
 * Return: The number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				x++;
		}
		y++;
		if (x == 0 || x != y)
			break;
	}
	return (x);
}
