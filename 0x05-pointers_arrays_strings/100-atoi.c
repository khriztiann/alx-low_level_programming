#include "main.h"
#include <stdio.h>

/**
 * _atoi - the atoiis used to convert an input into a string
 * @s: the string to be converted
 * Return: return a string of integer
 */

int _atoi(char *s)

{
	int i = 0;
	unsigned int un = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			isi = 1;
			un = (un * 10) + (s[a] - '0');
			a++;
		}
		if (isi == 1)
		{
			break;
		}
		a++;
	}
	ni *= min;
	return (un);
}
