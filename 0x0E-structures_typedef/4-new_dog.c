#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NUll (if function fails) new_dog (otherwise)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *milou;

	milou = malloc(sizeof(dog_t));
	if (milou == NULL)
		return (NULL);
	milou->name = name;
	milou->age = age;
	milou->owner = owner;
	return (milou);
}
