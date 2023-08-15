#include "main.h"
/**
 * main - main block
 * Description: print _putchar using putchar only
 * Return: 0
*/

int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);

}
