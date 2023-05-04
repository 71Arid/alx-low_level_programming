#include "hash_tables.h"

/**
* key_index - returns the index
* @key: key value
* @size: size of hash table
* Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
int index;

index = hash_djb2(key);

return (index % size);
}
