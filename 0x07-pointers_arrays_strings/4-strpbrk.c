#include <string.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:  Pointeur vers la chaîne de caractères dans laquelle la recherche
 * @accept: Pointeur vers la chaîne de caractères contenant les caractères
 *
 * Return: point to first occurence s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	return (result);
}
