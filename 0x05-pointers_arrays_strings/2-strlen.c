#include <stdio.h>
#include "main.h"

/**
 * _strlen - stands for string length which returns the value of a string
 * @str: the string length
 * Return: alway return the string length @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
