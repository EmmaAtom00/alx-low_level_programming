#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that defines a dog
 * @name: name of the dog
 * @age: the dogs age
 * @owner: dogs owner
 */

#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
