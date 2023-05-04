#include "hash_tables.h"

/**
 * hash_table_print - prints tables
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *bucket;
	int fin = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			if (fin)
				print(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
