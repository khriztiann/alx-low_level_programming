#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: an array
 * Return: Always return 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}
