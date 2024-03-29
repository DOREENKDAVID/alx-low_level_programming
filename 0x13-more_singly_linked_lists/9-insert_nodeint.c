#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *ptr2;

	if (head == NULL)
	return (NULL);
	if (idx != 0)
	{
		ptr = *head;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	}
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);

	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
