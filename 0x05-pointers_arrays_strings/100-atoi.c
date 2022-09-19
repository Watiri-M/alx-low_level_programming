#include "main.h"
#include <limits.h>
#include <string.h>
#include "main.h"



/**
 *  _atoi - converts a string to an integer
 * @s: character
 * Return: string
 */

int _atoi(char *s)

{

	int x;

	int y;

	unsigned int z;

	x = 0;

	y = 1;

	z = 0;

	while (s[x] != '\0')

	{

	if (s[x] == '-')

	{

	y = -y;

	}

	for (; s[x] >= '0' && s[x] <= '9'; x++)

	{

	z = z * 10 + ((int)s[x] - '0');

	}

	if (z > 0 || s[x] == '\0')
	}
	break;
	}
	x++;
	}
	return (z * y);
}
