#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 * @n: number to start from
 * Return: 0 or 1
*/

void print_to_98(int n)
{
	while (n > 98)
	{
		prinf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		prinf("%d, ", n);
		n++;
	}
	prinf("98");
	putchar('\n');
}
