#include <stdio.h>
/**
 * main-Printing the alphabet in lowercase
 * Description:using the _putchar
 * Return:Always return (0)
 *
 */
int main(void)
{
	char c;

c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	{
		putchar('\n');
	}
	return (0);
}
