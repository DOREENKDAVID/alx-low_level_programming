#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * linked list, and returns the head node’s data (n).
 * @head: pointer to first node
 * Return: 0 if empty
 *
 */

int pop_listint(listint_t **head);
{
	listint_t *temp = head;
	int n;

	if (head == NULL)
		return (0);

	listint_t *temp = head;

	head = head->link;
	n = temp->n
	free(temp);
	temp = NULL;
}
