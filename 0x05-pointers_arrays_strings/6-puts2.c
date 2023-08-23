#include <string.h>
#include "main.h"

/**
 * puts2 - print character
 *
 * @str: character to print
 *
 */
void puts2(char *str)
{
	int i;
	int length;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
