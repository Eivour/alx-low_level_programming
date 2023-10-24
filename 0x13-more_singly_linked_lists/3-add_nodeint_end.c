#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last_n;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
		{
			last_n = last_n->next;
		}
		last_n->next = new_n;
	}

	return (new_n);
}
