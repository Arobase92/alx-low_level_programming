#include <ctype.h>

/**
 * _isdigit - checks if a character is digit
 * @c: character to check
 *
 * Return: 1 (digit) 0 (other)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
