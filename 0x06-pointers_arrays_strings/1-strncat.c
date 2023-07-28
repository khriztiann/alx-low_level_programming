#include "main.h"

/**
 * _strncat - cateneates two strings from an inputs source
 * @src: the source of the string
 * @n: the element
 * @dest: the destination of the string
 * Return: A pointer of the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0, index = 0;

	while (dest[index++])
		dest_length++;
for (index = 0; src[index] && index < n; index++)
	       dest[dest_length++] = src[index];
	return (dest);
}
