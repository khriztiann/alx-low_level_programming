#include <stdio.h>
#include "main.h"

/**
 * swap_int - the pointer swaps twointegers
 * @a: the first integer
 * @b: the second integer
 * Return: return the swapped values
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
