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
i{
	listint_t *ptr, *ptr2
	listint_t *ptr2 = malloc(sizeof(listint_t));

	if (head == NULL)
	return (NULL);
	if (idx != 0)
	{
		ptr = *head;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->link;
	}
	if (ptr == NULL)
		return (NULL);
	}
	if (ptr2 ==NULL)
		return (NULL);

	ptr2->data = n;
	ptr2->link = NULL;

	if (idx == 0)
	{
		ptr2->link = *head;
		*head = ptr2;
		return(ptr2);

	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;

	return (ptr2);
}
