#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - retrieve to last digit to check
 *
 * Return: 0 (all success)
 */

int main(void)
{
	int n;
	int last_dt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dt = n % 10;

	if (last_dt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dt);
	else if (last_dt == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dt);
	else if (last_dt < 6 && last_dt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dt);
	return (0);
}
