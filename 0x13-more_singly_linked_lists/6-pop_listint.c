#include "lists.h"

/**
 * pop_listint - deletes the head of a node of listint_t
 * @head: pointer of node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int res;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	res = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (res);
}
