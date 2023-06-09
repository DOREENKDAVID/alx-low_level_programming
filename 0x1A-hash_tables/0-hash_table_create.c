#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array in hash table
 *
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Check if the size is 0*/
	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table structure*/
	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	/* Set the size of the hash table*/
	ht->size = size;

	/* Allocate memory for the array of hash node pointers*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	/* Initialize each element of the hash table array to NULL*/
	for (unsigned long int i = 0; i < size; i++)
		ht->array[i] = NULL;

	/* Return the pointer to the created hash table*/
	return (ht);
}
