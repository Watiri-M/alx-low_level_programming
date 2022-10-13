#include "variadic_functions.h"

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

	int *arr = malloc(sizeof(int) * n);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
			arr[i] = 1;
		else
			arr[i] = 0;
	}
	va_end(args);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
