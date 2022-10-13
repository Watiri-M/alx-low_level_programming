#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints out a name
 * @name: string parameter
 * @f: chacracter
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}