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
		putchar(n);
	for (n = 65; n < 91; n++)
		putchar(n);
	putchar(10);

	return (0);
}
