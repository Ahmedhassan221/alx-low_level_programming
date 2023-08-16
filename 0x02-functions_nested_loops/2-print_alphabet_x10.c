#include "main.h"

/**
 * main - main block
 *
 * Description: print all letters in lowercase ten times
 *
 * Return: 0
*/

int main(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}
