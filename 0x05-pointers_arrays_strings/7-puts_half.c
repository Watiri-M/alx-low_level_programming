#include <string.h>

#include "main.h"



/**
 * puts_half - prints the second half of a string
 * @s: character
 * Return: Null
 */

void puts_half(char *s)

{

	int ph = strlen(s), i;

	if (ph % 2 == 0)

	{

	for (i = ph / 2; i < ph; i++)

	_putchar(s[i]);

	}

	else

	{

	for (i = ph / 2 + 1; i < ph; i++)

	_putchar(s[i]);

	}

	_putchar('\n');

}
