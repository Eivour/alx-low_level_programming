#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at beginning of list_t list
 * @str: string
 * @head: frst node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	first_node = malloc(sizeof(list_t));

	if (!first_node)
		return (NULL);

	first_node->str = strdup(str);
	first_node->next = (*head);
	(*head) = first_node;

	return (*head);
}
