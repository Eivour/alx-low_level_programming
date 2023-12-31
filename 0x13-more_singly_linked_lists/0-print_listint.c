#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_length++;
	}

	return (node_length);
}
