#include "main.h"

/**
 * _strncpy - copies an input of string from a source to another destination
 * @src: the source of the string to be copied
 * @dest: the destination of the string to be copied
 * @n: the element
 * Return: The resultng string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_length = 0, index = 0;

	while (src[index++])
		src_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_length; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
