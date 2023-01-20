#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog
 * @dog: structure of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer if yes null if no
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d -> name = name;
	d -> age = age;
	d -> owner = owner;

	return (d);
}
