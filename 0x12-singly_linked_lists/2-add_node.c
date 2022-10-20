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
	list_t *l;
	size_t size;
	int i;

	l = malloc(sizeof(list_t));
	if (l == NULL)
		return (NULL);

	for (i = 0, size = 0; str[i] != '\0'; i++)
		size++;

	l->str = strdup(str);
	l->size = size;

	l->next = *head;
	(*head) = l;

	return (l);
}
