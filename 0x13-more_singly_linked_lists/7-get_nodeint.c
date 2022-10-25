#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t
 * @head: pointer to the node
 * @index: position of node
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0 && head)
		return (head);

	for (i = 0; head && i < index; i++)
		head = head->next;

	if (head)
		return (head);
	return (NULL);
}
