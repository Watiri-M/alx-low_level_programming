#include "main.h"

/**
 * leet - codes a string into 1337
 * @n: character n
 * Return: n value
 */

char *leet(char *n)

{

	int i, j;

	char n1[] = "aAeEoOtTlL";

	char n2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)

	{

	for (j = 0; j < 10; j++)

	{

	if (n[i] == n1[j])
	{
		n[i] = n2[j];
	}
	}
	}
	return (n);
}
