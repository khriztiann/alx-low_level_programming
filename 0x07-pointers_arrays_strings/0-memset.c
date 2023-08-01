#include "main.h"

/*
 * _memset - the entry point of constant byte
 * @b: a constant
 * @s: point destination
 * @n: bytes
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
