#include "main.h"

/**
 * print_sign - + for characters greater than 1 and - for vise versa
 * @n: a function that prints the sign of a number
 * Return: 0 for charaters equal 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
			return (0);
	}
}
