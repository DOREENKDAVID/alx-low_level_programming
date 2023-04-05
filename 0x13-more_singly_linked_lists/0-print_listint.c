#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a func tha prints number of nodes
 * @h:list to print
 * Return:number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
