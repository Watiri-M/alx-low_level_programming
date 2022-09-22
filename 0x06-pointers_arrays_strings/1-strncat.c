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

	int len;
	int i;

	len = get_len(dest);
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;

	}

		dest[len + i] = '\0';

	return (dest);

}

/**
 * get_len - returns the length of a string
 * @s: String character
 * Return: length of string character
 */

int get_len(char *s)

{

	int len;
	int i;

	len = 0;
	i = 0;

	while (s[i] != '\0')
	{
		++len;
		i++;

	}

	return (len);
}
