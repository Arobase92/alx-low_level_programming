#include <string.h>
#include "main.h"

/**
 * is_palindrome - Check whether a strring is palindrome
 *
 * @s: string to check
 *
 * Return: 1 (if string palindrome) 0 (otherwise)
 */
int is_palindrome(char *s)
{
	int length;
	int start;

	start = 0;
	length = strlen(s) - 1;
	if (isHelperPalindrome(s, start, length) == 1)
		return (1);
	else
		return (0);
}

/**
 * isHelperPalindrome - function to helper to check if a string is palindrome
 *
 * @s: string to check
 * @start: index to begin
 * @end: index to end
 *
 * Return: 1 or 0
 */
int isHelperPalindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);

	return (isHelperPalindrome(s, start + 1, end - 1));
}
