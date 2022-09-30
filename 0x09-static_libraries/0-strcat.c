#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: character
 * @src: String character
 * Return: A pointer to returning string
 */

char *_strcat(char *dest, char *src)

{

	int i;
	int destLine = 0;
	int x = 0;

	while (dest[x] != '\0')

	{
	destLine++;

	x++;

	}

	for (i = 0; src[i] != '\0'; i++)

	dest[destLine + i] = src[i];

	dest[destLine + i] = '\0';

	return (dest);
}
