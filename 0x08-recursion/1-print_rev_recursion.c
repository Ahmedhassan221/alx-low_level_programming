#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: a pointer to a string
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	while (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
