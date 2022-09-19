#include <string.h>

#include "main.h"



/**
 * rev_string - reverse a string
 * @str: character
 */

void rev_string(char *str)

{

	int i = strlen(str) - 1, x = 0;

	char c;

	while (i > x)

	{

	c = str[i];

	str[i] = str[x];

	str[x] = c;

	i--;

	x++;

	}

}
