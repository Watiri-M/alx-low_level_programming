#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: points to the first node
 *
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int no = 0;

	while (h != NULL)
	{
		no++;
		h = h->next;
	}
	return (no);
}
