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
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
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
	int i = 0, yz = 0, j = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, yz++)

	s = malloc(sizeof(char) * yz + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
			s[count] = av[i][j];

		s[count] = '\n';
		count++;
	}
	s[count] = '\0';

	return (s);
}
