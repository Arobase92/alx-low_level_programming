#include <string.h>
#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer of the string to compute the length to prefix
 * @accept: the prefix string
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = strspn(s, accept);

	return (length);
}
