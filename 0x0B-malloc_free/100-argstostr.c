#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - concatenates all the arguments of your program
 * @s: string
 * Return: NULL if ac == 0 or av == NULL
 */
int _strlen(char *s)
{
	int x = 0;

	for (; s[x] != '\0'; x++)
	;
	return (x);
}

/**
 * *argstostr - concentrates
 * @ac: a character
 * @av: av character
 *
 * Return: a pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, y = 0, j = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, y++)

	s = malloc(sizeof(char) * y + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
			s[z] = av[i][j];

		s[z] = '\n';
		z++;
	}
	s[z] = '\0';

	return (s);
}
