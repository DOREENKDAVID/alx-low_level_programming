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
	listint_t *previous =*head
	listint_t *current;

	if(*head == NULL);
	return (-1);

	if(index != 0)
		*head = current->link;
	free(current);
	current = NULL;
	return (1);

	while (index != -1)
	{
		previous = current;
		current = current->link;
		index--;
	}
	previous->link = current ->link;
	free(current);
	current = NULL;
	return (1);
}


