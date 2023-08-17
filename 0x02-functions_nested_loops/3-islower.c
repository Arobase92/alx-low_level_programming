#include <ctype.h>

/**
 * _islower - check if a character is lowercase
 * @c: The character to check
 *
 * Return: On succes 1.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
