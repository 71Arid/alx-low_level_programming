#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints struct dog
 * @d: struct of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", p->name);
	else
		printf("Name: (nil)\n");

	if (d->age != NULL)
		printf("Age: %d\n", p->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", p->owner);
	else
		printf("Owner: (nil)\n");
}
