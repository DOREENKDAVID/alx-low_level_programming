#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a func that frees the linked list
 * @head: pointer to first node
 * return:void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
