#include "hash_tables.h"

/**
* check_ht - check if key already exists in hash table
* @ht: double pointer to entire hash table
* @key: key to look in hash table
*
* Return: 1 if key is found, 0 if not
*/

int check_ht(hash_node_t **ht, const char *key)
{
	hash_node_t *temp = *ht;

	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (1);
		temp = temp->next;
	}
	return (0);
}
/**
* switch_val - if key is pre-existing, switch it with new value
* @ht: double pointer to entire hash table
* @key: key to add
* @value: value to override at key
*
* Return: void
*/

void switch_val(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;
	free(temp->value);
	temp->value = strdup(value);
}


/**
 * add_node_beg - add new node at the beginning of the hash table list
 * @head: double pointer to entire hash table
 * @key: key to add string
 * @value: valueassociate with key
 *
 * Return: the address of the new element, NULL if failure
 */
hash_node_t *add_node_beg(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	} else
	{
		new->next = (*head);
		(*head) = new;
	}
	return (*head);
}




/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: the key string
 * @value: is the value associated with the key.
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned char *newkey = NULL;

	if (!ht || !key || key[0] == '\0' || !ht->array || !ht->size)
		return (0);

	newkey = (unsigned char *)key;

	index = key_index(newkey, ht->size);

	if (check_ht(&ht->array[index], key))
	{
		switch_val(&ht->array[index], key, value);
		return (1);
	}
	add_node_beg(&ht->array[index], key, value);
	if (!&ht->array[index])
		return (0);
	return (1);
}
