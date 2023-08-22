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
	int end;
	int i;

	start = strlen(str) / 2;
	end = strlen(str);

	for (i = start; i <= end; i++)
		_putchar(str[i]);
	_putchar(10);
}
