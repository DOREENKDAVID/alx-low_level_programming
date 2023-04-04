#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the list
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = head;

	if (head == NULL)
	return;

	while (*temp != NULL)
	{
	temp = (*head)->temp;
	free(*head);
	*head = temp;
	}
	return (head)
}
