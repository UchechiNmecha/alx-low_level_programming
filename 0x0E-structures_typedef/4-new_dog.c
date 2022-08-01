#include "dog.h"

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dogs's owner
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *dog_n;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	dog_n->name = malloc(i * sizeof(dog_n->name));
	if (dog_n->name == NULL)
	{
		free(dog_n->name);
		free(dog_n);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dog_n->name[k] = name[k];
	dog_n->age = age;
	dog_n->owner = malloc(j * sizeof(dog_n->owner));
	if (dog_n->owner == NULL)
	{
		free(dog_n->owner);
		free(dog_n->name);
		free(dog_n);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog_n->owner[k] = owner[k];
	return (dog_n);
}
