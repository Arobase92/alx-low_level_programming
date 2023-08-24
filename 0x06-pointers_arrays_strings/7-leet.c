#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: str
 */
char *leet(char *str)
{
	char *letters = "aAeEOoTtLl";
	char *numbers = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
