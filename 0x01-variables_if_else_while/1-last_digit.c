#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -main block
 *
 * Description: get the last digit in the number and compare it with 5
 *
 * Return: 0
*/

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);

}
