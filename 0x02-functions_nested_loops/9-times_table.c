#include "main.h"

/**
 * times_table - prints times table
 * Return:void
*/

void times_table(void)
{
	int num, mlt, prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mlt = 1; mlt <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');

			prd = num * mlt;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');

		}
		_putchar('\n');
	}
}

