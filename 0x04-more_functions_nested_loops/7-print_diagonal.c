#include "main.h"

/**
 * print_diagonal - draw a diagonal
 * @n: number of / to be printed
 * Return: void
*/

void print_diagonal(int n)
{
	int i = 0;
	int ii;

	while (n > i && n > 0)
	{
		ii = 0;
		while (i > ii)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
