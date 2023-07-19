#include "main.h"

/**
 *print_last_digit - There are only 3 colors, 10 digits, and 7 notes
 *@n: digit
 *Return: always 0
 */

int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (n < 0)
	{
		last_digit = lst * -1;
	}
	_putchar (lst + 0);
	return (lst);
}
