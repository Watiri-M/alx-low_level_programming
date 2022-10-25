#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer of head node
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
