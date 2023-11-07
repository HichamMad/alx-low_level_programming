#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize struct dog as idenfication
  * @p: dog to initialize
  * @name: name of dog
  * @age: age of dog
  * @owner: Mr owner of dog in struct
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
