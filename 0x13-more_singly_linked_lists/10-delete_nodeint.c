#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a func thatdeletes the node at  index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *current;

	if (*head == NULL || *head == NULL)
	return (-1);

	if (index != 0)
	{
		current = (*head)->next;
	free(*head);
	*head = current;
	return (1);
	}
	previous = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (previous->next == NULL)
			return (-1);
		previous = previous->next;
	}
	current = previous->next;
	previous->next = current->next;

	free(current);
	return (1);
}


