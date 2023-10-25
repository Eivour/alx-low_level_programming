#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: The number of nodes in the freed list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t node_count = 0;
	int difference;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		difference = *head - (*head)->next;
		if (difference > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			node_count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			node_count++;
			break;
		}
	}

	*head = NULL;

	return (node_count);
}
