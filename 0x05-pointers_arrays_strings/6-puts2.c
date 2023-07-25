#include "main.h"

/**
 * puts2 - the puts is use to print the characters of the string
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)

{
	int i
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for  (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
