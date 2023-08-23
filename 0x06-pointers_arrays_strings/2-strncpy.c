#include <string.h>
#include "main.h"

/**
 * _strncpy- copies a strings
 *
 * @dest: string destination
 * @src : string source
 * @n: the size octet to copie
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
