#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the character
 *
 * Return: decimal number (Success) or 0 (error)
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bin = 1, len = 0;
	unsigned int result = 0;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			result += bin;
		bin *= 2;
	}
	return (result);
}
