#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a func tha prints number of nodes
 * @h: head node
 * Return:number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t counter = 0;

	while (h != NULLL)
	{
	printf("%d\n", h->n);
	h = h->next:
	counter++;
	}

	return (counter);
}

