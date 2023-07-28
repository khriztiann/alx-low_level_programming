#include "main.h"

/**
 * reverse_array - displays the content of the array in reverse order
 * @a: the array of interger to be reversed
 * @n: the elements in the array
 * Return: return the array in reverse order
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
