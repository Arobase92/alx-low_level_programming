#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to print
 *
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = strlen(str);
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
