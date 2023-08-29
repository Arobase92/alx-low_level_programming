#include <string.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer of the memory bloc to fill
 * @b: the value to copy in every octet
 * @n: the number octect that you want fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
