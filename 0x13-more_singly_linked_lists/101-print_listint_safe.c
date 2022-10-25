#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodes = 0;
	long int diff;

	while (head != NULL)
	{
		diff = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
