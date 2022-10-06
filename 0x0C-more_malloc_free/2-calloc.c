#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: length
 * @size: size
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = calloc(nmemb, size);
	if (pnt == NULL)
		return (NULL);
	return (pnt);
}
