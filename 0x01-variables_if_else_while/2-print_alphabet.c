#include <stdio.h>
/**
 * main-A loop conditional statement using for
 * Description:The for loop has 3 parts which are the init, cond and update
 * Return:always return (0)
 *
 */
int main(void)
{
	char alpha26;

	for (alpha26 = 'a'; alpha26 <= 'z'; alpha26++)
	{
		putchar(alpha26);
	}
	for (alpha26 = 'A'; alpha26 <= 'Z'; alpha26++)
	{
	putchar(alpha26);
	}
	return (0);
}
