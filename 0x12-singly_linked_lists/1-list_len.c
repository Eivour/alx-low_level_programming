#include "lists.h"
#include <stdlib.h>

/**
 * list_len - number of elements in linked list_t list
 * @h: Pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
