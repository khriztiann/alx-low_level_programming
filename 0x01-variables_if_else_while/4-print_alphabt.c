#include <stdio.h>
/**
 * main-Using the continue variable for skip
 *
 * Return:Always return (0)
 *
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e' && c != 'q') && c <= 'z')
			putchar (c);
		c++;
		}
	{
		putchar ('\n');
	}
	return (0);
}
