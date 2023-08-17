#include "main.h"

/**
 * print_square - print a square
 * @n: number of # to be printed
 * Return: void
*/

void print_square(int n)
{
	int i = 0;
	int ii;

	while (n > i && n > 0)
	{
		ii = 0;
		while (n > ii)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
