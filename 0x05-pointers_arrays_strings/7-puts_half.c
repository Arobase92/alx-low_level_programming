#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to print
 *
 */
void puts_half(char *str)
{
	int start;
	int length;

	length = strlen(str);
	if (length % 2 == 0)
	{
		for (start = length / 2; start < length; start++)
			_putchar(str[start]);
	}
	else
	{
		for (start = (length - 1) / 2; start < length; start++)
			_putchar(str[start]);
	}
	_putchar(10);
}
