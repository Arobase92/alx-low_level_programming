#include "main.h"

/**
 * reverse_array - reverse integers array
 *
 * @a: array
 * @n: size array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = n - 1; i <= j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
