#include "lists.h"

/**
 * listint_len - a func that returns number if ekements
 * @h: pointer to the list
 * Return:num of elemets in the list
 */

size_t listint_len(const listint_t *h);
{
	size_t  count = 0;

	while (h != NULL)
	{

	count++;
	h = h->next;
	}

	return (count);
}
