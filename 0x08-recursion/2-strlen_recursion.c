#include "main.h"

/**
 * _strlen_recursion - return the length od a string
 * @s: a pointer to the string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
		n = n + _strlen_recursion(s + 1) + 1;

	return (n);
}
