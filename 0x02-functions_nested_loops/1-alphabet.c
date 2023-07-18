#include <stdio.h>
/**
 * main-Printing the alphabet in lowercase
 *Description:using the _putchar
 * Return:Always return (0)
 *
 */
void print_alphabet(void)
{
	char c;

	while (c <= 'z')
		c = 'a';
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
}
