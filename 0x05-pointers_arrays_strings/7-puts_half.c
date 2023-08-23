#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to print
 *
 */
void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
