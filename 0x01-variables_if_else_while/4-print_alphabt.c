#include <stdio.h>

/**
 * main - prints alphabet lowercase
 *
 * Return: 0 (all success)
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 101 || n == 113)
			continue;
		putchar(n);
	}
	putchar(10);

	return (0);
}
