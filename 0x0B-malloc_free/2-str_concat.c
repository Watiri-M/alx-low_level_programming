#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(const char *s);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Null
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0;
	char *z;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	x = _strlen(s1);
	y = _strlen(s2);

	z = malloc((x + y) * sizeof(*s1) + 1);

	if (z == 0)
		return (NULL);
	strcat(z, s1);
	strcat(z, s2);
	return (z);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
