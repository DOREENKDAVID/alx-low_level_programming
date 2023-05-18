#include "lists.h"
/**
* insert_dnodeint_at_index - insert a new node in list at position index
* @h: double pointer to nodes in the list
* @idx: index to insert node at
* @n: data to fill into new node
*
* Return: new node at postion on success, NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
	}

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; temp->next && i <= idx; i++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->next->prev = new_node;
			return (new_node);
		}
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
