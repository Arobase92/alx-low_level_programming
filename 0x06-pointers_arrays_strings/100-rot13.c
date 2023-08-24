#include "main.h"

/**
 * rot13 - function that encodes a string into rot13
 *
 * @str: string to encode
 *
 * Return: str
 */
char *rot13(char *str)
{
	char *input = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char *output = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
			}
		}
	}
	return (str);
}
