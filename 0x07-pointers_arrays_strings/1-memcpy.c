#include "main.h"

/**
 * _memcpy - the entry point
 * @dest: the destination (output)
 * @src: the source (input)
 * @n: input
 * Return: Always return 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
