#include <stdio.h>

/**
 * main - prints combinations of two digits
 *
 * Return: 0 (all success)
 */

int main(void)
{
	int n;
	int m;
	int k;

	for (n = 48; n < 58; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			for (k = m + 1; k < 58; k++)
			{
				putchar(n);
				putchar(m);
				putchar(k);

				if (n != 55 || m != 56 || k != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}

	putchar('\n');
	return (0);
}
