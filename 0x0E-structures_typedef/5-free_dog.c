#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the doggos
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
