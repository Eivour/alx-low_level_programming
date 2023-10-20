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
	list_t *head = NULL;

	head = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (1);
	}
	head->val = 1;
	head->next = NULL;
}
