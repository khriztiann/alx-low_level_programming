#include "main.h"

/**
 * print_number - prints the number
 * @n: the integer to be printed
 * Return: the integer.
 */
void print_number(int n)

{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((n % 10) + '0');
}
