#include "main.h"
#include <stdio.h>

/**
 * set_string - a function that sets the value of a pointer to s char
 * @s: the input to set
 * @to: the pointer to set to
 * Return: Always return 0 (success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
