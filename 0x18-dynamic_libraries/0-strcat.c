#include "main.h"
/**
 * _strcat - concancates string pointed to by @src
 * @dest: pointer to string to be concancated upon
 * @src: pointer to sjtring to be appended to @dest
 * Return: pointer to destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
