#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: dest character
 * @src: String character
 * @n: character
 * Return: Pointer resulting string
 */

char *_strncat(char *dest, char *src, int n)

{

	int i;
	int destlen = 0;
	int x = 0;

	while (dest[x] != '\0')
	{

		destlen++;
		x++;

	}

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[destlen + i] = src[i];
		dest[destlen + i] = '\0';

	return (dest);

}
