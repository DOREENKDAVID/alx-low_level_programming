#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array in hash table
 *
 * Return: Pointer to the hash table
 * Description
 * Check if the size is 0
 * Allocate memory for the hash table structure
 * Set the size of the hash table
 * Allocate memory for the array of hash node pointers
 * Initialize each element of the hash table array to NULL
 * Return the pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
