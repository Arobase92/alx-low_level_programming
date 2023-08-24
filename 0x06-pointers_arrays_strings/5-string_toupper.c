#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 *
 * @str: string
 *
 * Return: str
 *
 */
char *string_toupper(char *str)
{
	int length = strlen(str);
	int i;
	char c;

	for (i = 0; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
