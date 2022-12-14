#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: string that needs to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0, len = 0; str[i] != '\0'; i++)
		len++;

	new->str = strdup(str);
	new->len = len;

	new->next = *head;
	(*head) = new;

	return (new);
}
