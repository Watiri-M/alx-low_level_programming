#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: numbers are seperated via string
 * @n: character
 *
 * Return: Null
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (seperator)
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
