#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize struct dog as idenfication
  * @p: dog to initialize
  * @name: name of dog
  * @age: age of dog
  * @owner: Mr owner of dog in struct
  */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
