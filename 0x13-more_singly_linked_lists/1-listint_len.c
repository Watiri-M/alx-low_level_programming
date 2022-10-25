#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int numberofnodes = 0;

	while (h != NULL)
	{
		numberofnodes++;
		h = h->next;
	}
	return (numberofnodes);
}
