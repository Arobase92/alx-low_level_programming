#include <ctype.h>

/**
 * _isalpha - check if a character is alphabetic character
 * @c: The character to check
 *
 * Return: On succes 1.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
