#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string character
 * Return: capitalized string
 */

char *cap_string(char *s)

{

	int i;

	i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case ' ':
			case '\n':
			case '\t':
			case ',':
			case '.':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
	}

	return (str);
}
