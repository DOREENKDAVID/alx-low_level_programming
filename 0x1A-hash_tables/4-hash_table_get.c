#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:the hash table you want to look into
 * @key:the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *newkey = NULL;
	hash_node_t *head = NULL;

	if (ht == NULL)
		return (NULL);

	newkey = (unsigned char *)key;

	index = key_index(newkey, ht->size);

	head = (ht->array)[index];

	while (head)
	{
		if (!strcmp(head->key, key))
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
