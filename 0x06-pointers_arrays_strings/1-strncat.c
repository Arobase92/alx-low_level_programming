#include <string.h>
#include "main.h"

/**
 * _strncat - concate two strings
 *
 * @dest: string 1
 * @src : string 2
 * @n: the size octet of src concate
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
