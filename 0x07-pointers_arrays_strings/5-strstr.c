#include <string.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to string which to search
 * @needle: pointer to substring to search
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	return (result);
}
