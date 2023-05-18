#include "lists.h"

/**
* add_dnodeint_end - adds a node to end of linked list
* @head: double pointer to nodes in the list
* @n: data to fill new node with
*
* Return: new node on success, NULL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	temp = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
