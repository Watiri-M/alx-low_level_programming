#include "main.h"



/**
 *  _atoi - converts a string to an integer
 * @s: character
 * Return: string
 */

int _atoi(char *s)

{
	int i;
	int y;
	unsigned int z;

	i = 0;
	y = 1;
	z = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			y = -y;
		}
		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			z = z * 10 + ((int)s[i] - '0');
		}

		if (z > 0 || s[i] == '\0')
		{
			break;
		}

		i++;

	}
	return (z * y);
}
