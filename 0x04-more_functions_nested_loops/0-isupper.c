#include <ctype.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 *
 * Return: 1 (upper) 0 (other)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
