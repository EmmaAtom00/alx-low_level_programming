#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *Ndog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	Ndog = malloc(sizeof(dog_t));
	if (Ndog == NULL)
	{
		free(Ndog);
		return (NULL);

	}
	Ndog->name = malloc(i * sizeof(Ndog->name));
	if (Ndog->name == NULL)
	{
		free(Ndog->name);
		free(Ndog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		Ndog->name[k] = name[k];
	Ndog->age = age;
	Ndog->owner = malloc(j * sizeof(Ndog->owner));
	if (Ndog->owner == NULL)
	{
		free(Ndog->owner);
		free(Ndog->name);
		free(Ndog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		Ndog->owner[k] = owner[k];
	return (Ndog);
}
