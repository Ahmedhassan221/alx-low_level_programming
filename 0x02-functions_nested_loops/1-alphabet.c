#include "main.h"
/**
 * main -main block
 * Description: pront all letters in lowercase
 * Return: 0
*/

int main(void)
{
	void print_alphabet(void);
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

	return (0);
}
