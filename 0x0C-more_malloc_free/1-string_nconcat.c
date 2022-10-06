#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @str1: string one
 * @str2: string two
 * @size: size
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *str1, char *str2, unsigned int size)
{
	unsigned int x, y
	char *pnt;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	x = strlen(str1);
	y = strlen(str2) <= size ? strlen(str2) : size;
	pnt = malloc(x + y + 1);

	if (pnt == NULL)
		return (NULL);

	strcpy(pnt, str1);
	strncat(pnt, str2, size);

	return (pnt);

}
