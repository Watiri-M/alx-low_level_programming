#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int countofnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		countofnodes++;
		h = h->next;
	}
	return (countofnodes);
}
