#include <stdlib.h>
/**
 * _calloc - allocate memory in a multiple of some size
 *
 * @nmemb: number of memory blocks
 * @size: size of blocks
 *
 * Return: pointer to allocated memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
		p[i] = 0;
	return (p);
}
