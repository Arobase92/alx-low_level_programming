#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	char tmp;
	int j;
	int i;
	int length;

	length = strlen(s);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

