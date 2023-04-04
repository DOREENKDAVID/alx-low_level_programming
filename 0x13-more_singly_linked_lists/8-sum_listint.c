#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;
	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->data;
		ptr =ptr->link;
	}
	return (sum);
}
