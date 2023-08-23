#include <string.h>
#include "main.h"

/**
 * _strcat - concate two strings
 *
 * @dest: string 1
 * @src : string 2
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
