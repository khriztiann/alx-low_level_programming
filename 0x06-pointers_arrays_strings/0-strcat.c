#include "main.h"
#include <stdio.h>

/**
 * _strcat - str - string cat - catenatate hence catenate a string
 * @dest: the destination of the string
 * @src: The source of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int den = 0, i;

	while (dest[den])
	{
		den++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[den] = src[i];
		den++;
	}
	dest[den] = '\0';
	return (dest);
}
