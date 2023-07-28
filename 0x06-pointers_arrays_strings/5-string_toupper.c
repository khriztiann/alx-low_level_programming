#include "main.h"

/**
 * string_toupper - the toupper is used to change all the letters from
 * lowercase to uppercase
 * @str: the string to be changed
 * Return: The changed string
 */

char string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
