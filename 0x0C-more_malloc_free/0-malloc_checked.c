#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - malloc memory and exit 98 on failure
 *@b: size to allocate
 *Return: pointer to allocated data
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
