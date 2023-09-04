#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initialize
 *
 * @size: the length of array
 * @c: character for initialization
 * Return: pointer (if memory allocated) NULL (otherwise)
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	i = 0;
	tab = malloc(sizeof(char) * size);

	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
