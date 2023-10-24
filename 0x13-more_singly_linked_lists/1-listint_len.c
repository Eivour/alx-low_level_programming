#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - counts elements
 * @h: pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
