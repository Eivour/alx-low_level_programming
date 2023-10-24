#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	}
	length++;
	h = h->next;
	
	return (length);
}
