#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string character
 * Return: String
 */

char *rot13(char *s)

{

	int i, j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char mixalpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)

	{

	for (j = 0; alpha[j] != '\0'; j++)

	{

	if (s[i] == alpha[j])

	{
		s[i] = mixalpha[j];
		break;
	}
	}
	}
	return (s);
}
