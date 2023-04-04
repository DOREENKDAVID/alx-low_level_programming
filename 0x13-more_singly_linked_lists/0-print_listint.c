#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_listint - a func tha prints number of nodes
 * @h: head node
 * Return:number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t counter = 0;

	while (h != NULL)
		;
	{
		counter++
		h = h->link
	}
	printf("%d\n", counter);

	return (counter);
}

