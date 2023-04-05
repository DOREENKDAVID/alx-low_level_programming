#include <stdlib.h>
#include  "lists.h"

/**
 * add_nodeint_end - a func that add a new node at the end of the list
 * @head: double pointer to the first node
 * @n:int to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	if (head == NULL)
	return (NULL);

	temp = malloc(sizeof(listint_t));
	if (head == NULL)
	return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
