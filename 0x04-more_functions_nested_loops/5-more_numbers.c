#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Return: 0
*/

void more_numbers(void)
{
	int i;
	char n, c;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (c > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + n);
		}
		_putchar('\n');
		i++;
	}
}


