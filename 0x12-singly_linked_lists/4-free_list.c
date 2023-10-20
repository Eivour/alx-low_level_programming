#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the beginning of the list_t list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
