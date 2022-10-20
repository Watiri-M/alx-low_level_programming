#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: character
 *
 * Return: Number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	unsigned int no = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		no++;
		h = h->next;
	}
	return (no);
}
