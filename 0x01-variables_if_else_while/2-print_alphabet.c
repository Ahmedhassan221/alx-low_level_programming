#include <stdio.h>

/**
 * main - main block
 *
 * Description: print the alphabet in the lowercase
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}
	return 0
}
