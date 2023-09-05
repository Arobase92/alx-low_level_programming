#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *
 * @str: String to duplicate
 *
 * Return: Null (insufficient memory was available) pointer (str)
 */
char *_strdup(char *str)
{
	char *text;
	int length;

	length = strlen(str);
	text = malloc(length * sizeof(char));

	if (text == NULL || str == NULL)
		return (NULL);
	text = strdup(str);
	return (text);
}
