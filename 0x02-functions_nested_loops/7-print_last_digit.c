#include "main.h"

/**
 *print_last_digit - There are only 3 colors, 10 digits, and 7 notes
 *@n: digit
 *Return: always 0
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar (last + '0');
	return (last);
}
