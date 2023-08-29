#include <string.h>
#include "main.h"

/**
 * strchr- function to locate a character
 *
 * @s: pointer to string to search character
 * @c: character to locate
 *
 * Return: pointer to first C or NULL
 */
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);
	return (result);
}
