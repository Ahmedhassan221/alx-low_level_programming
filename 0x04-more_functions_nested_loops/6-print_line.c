#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of _ that will be printed
 * Return: void
*/

void print_line(int n)
{
	int i = 0;

	while (n > i && n > 0)
	{
		_putchar('_');
		i++:
	}
	_putchar('\n');
}
