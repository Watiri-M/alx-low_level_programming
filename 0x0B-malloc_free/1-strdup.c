#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int x = 0;
	char *strY;

	if (str == NULL)
		return (NULL);

	for (; str[x] != '\0'; x++)
		;

	strY = malloc(x * sizeof(*str) + 1);

	if (strY == 0)
		return (NULL);

	strcpy(strY, str);
	return (strY);
}
