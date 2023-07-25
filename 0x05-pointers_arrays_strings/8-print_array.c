#include "main.h"

/**
 * print_array - use to print arrays
 * @a: the array
 * @n: the integer
 * Return: void
 */

void print_array(int *a, int n)

{
	int k;

	for (k = < 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n')
}
