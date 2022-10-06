#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size of the previous memory
 * @new_size: size of the new memory
 *
 * Return: pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *i;

	if (new_size == old_size)
		return (ptr);
	i = realloc(ptr, new_size);
	if (i == NULL)
		return (NULL);

	return (i);
}
