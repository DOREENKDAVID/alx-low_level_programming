#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - a function that deletes the head node of a
 * linked list, and returns the head node’s data (n).
 * @head: pointer to first node
 * Return: 0 if empty
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head ==  NULL || *head == NULL)
		return (0);
	temp = *head;
	head = head->next;
	n = temp->n;
	free(temp);
	return (n);
}
