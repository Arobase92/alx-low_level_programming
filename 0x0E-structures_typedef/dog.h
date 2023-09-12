#ifndef DOG_F
#define DOG_F

/**
 * struct dog - define a new type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
