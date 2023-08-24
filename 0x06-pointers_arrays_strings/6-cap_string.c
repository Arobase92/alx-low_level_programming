#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int space;
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.')
		{
			space = 1;
			continue;
		}
		if (space == 1)
		{
			str[i] = toupper(str[i]);
			space = 0;
		}
	}
	return (str);
}
