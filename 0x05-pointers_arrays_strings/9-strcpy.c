#include "main.h"
#include <stdio.h>

/**
 * _strcpy - the strcpy stands for copy string
 * @dest: the location to whic the string will be copied into
 * @src: the location of the string to be copied
 * Return: he pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
