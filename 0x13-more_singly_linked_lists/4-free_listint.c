#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a func that frees the linked list
 * @head: pointer to first node
 * return:void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
}
