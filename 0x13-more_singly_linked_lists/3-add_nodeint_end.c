#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a func that add a new node at the end of the list
 * @head: double pointer to the first node
 * @n:int to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current;

if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
return (new);
}
