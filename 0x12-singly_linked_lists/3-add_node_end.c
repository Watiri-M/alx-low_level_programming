#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: list head
 * @str: string that needs to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t len;
	int i;
	list_t *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0, len = 0; str[i] != '\0'; i++)
		len++;

	new->str = strdup(str);
	new->len = len;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	node = *head;

	for (i = 0; node->next != NULL; i++, node = node->next)
	{
		continue;
	}

	node->next = new;
	return (new);
}
