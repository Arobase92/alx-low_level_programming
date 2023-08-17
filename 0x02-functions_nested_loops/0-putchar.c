#include "main.h"

/**
 * main - Entry program
 *
 * Return: 0 (all succes)
 */
int main(void)
{
	char array[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(array[i]);
	}

	_putchar(10);
	return (0);
}
