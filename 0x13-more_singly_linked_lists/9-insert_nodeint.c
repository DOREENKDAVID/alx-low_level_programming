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
	listint_t *ptr = head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	ptr2->data = n;
	ptr2->link = NULL;

	while(idx != 0)
	{
		ptr = ptr->link;
		idx++;
	}
	ptr2->link = ptr->link;
	ptr->link =ptr2;

	return (ptr2);
}
