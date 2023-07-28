#include "main.h"

/**
 * _strncmp - cmp=compare strcmp compares pointers in a string
 * @s1: the first pointer containing the string to be compared
 * @s2: the second pointer comtaining the string to be compared
 * Return: return 0 if s1 == s2 else 1
 */

int _strncmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
