#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the if else statement
 *
 * Return:Always return 0 (success)
 *
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 5;
		if (o > 5)
		{
			printf("Last digit of %d is %d and is grater than 5\n", n, o);
		}
		else if (o == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, o);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6\n", n, o);
		}
	return (0);
}