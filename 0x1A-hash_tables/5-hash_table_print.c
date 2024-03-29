#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: is the hash table
 * Return: hash table ordered key value else NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *node = NULL;

	if (!ht || !ht->array)
	{
		return;
	}
	if (!ht->size)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
	}
	printf("}\n");
}
