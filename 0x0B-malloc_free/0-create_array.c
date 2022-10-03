#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char
 * @size: size
 * @arr: array
 *
 * Return:a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char arr)
{
	char *arr_ans = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || arr_ans == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr_ans[i] = arr;

	return (arr_ans);
}
