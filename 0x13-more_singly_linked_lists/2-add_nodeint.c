#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a func that add a new dode at the beginning
 * of the linked list.
 * @head: pointer to the current start of the list
 * @n: int to add to list
 * Return: address of new element of NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	return (NULL);

	ptr = (listint_t*(malloc(sizeof(listint_t));
	if (ptr == NULL)
	return (NULL);

	ptr->link = *head;

	ptr->data = n;

	*head = ptr;
	return (ptr);
}
