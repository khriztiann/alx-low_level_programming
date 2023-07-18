#include <stdio.h>
/**
 * main-Printting output in base 10
 *
 * Return:Always return 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar ((i % 10) + '0');
	}
	{
		putchar ('\n');
	}
	return (0);
}
