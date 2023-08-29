#include <string.h>
#include "main.h"

/**
 * _memcpy - function that copy address source to address destination
 *
 * @dest: pointer to address destination
 * @src: pointer to address source
 * @n: the size octet to copy
 *
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
