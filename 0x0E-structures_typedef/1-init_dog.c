#include "dog.h"

/**
 * init_dog - funtion to initialize a variable of type struct dog
 * @d: the name of the varaible to inialize
 * @name: the name attribute
 * @age: age attribute
 * @owner: owner attribute
 * Return: return nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	d->owner = owner;
}
