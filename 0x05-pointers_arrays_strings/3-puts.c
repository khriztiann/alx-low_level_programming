#include "main.h"

/**
 * _puts - the puts is used to print the string
 * @str: the string to be printed
 * Return: always retrun the string @str
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	{
		_putchar('\n');
	}
}
