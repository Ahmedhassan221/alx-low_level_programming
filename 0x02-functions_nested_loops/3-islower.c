#include "main.h"

/**
 * _islower - check the lowercase letter
 *
 * @c : character to check the case
 *
 * Return: 0 or 1
*/

int _islower(int c)
{
	if (c > 99 || 97 <= c <= 98)
		return (0);
	else
		return (1);
}
