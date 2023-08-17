#include "main.h"

/**
 * _isupper - check the uppercase character
 * @c: the int that wil use for the argument
 * Return: 0 or 1
*/

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
