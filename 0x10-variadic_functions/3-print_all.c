#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - anything
 * @format: string parameter
 *
 * Return: Null
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, x = 0;
	va_list args;
	char *str;
	char c_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (c_args[j])
		{
			if (format[i] == c_args[j] && x)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), x = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), x = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), x = 1;
				break;
			case 's':
				str = va_arg(args, char *), x = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	} va_end(args), printf("\n");
}

