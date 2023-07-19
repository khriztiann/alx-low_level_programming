#include "main.h"

/**
 * _isalpha - function for upercase and lowercase letters
 * @c: checks for alphabetic character
 * Return: return 1 for leter and 0 if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 65  && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
