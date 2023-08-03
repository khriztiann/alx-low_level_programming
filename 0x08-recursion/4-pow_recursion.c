#include "main.h"
#include <stdio.h>

/**
  * _pow_recursion - a power recursion that prints th value of x
  * raised to the power y
  * @x: the base
  * @y: the exponent
  *
  * Return: the value multiplied y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
