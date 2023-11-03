#include <stdlib.h>
/**
  * _calloc - allocates memory for an initialized buffer
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer to initialized buffer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *myptr;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	myptr = malloc(nmemb * size);
	if (myptr == 0)
		return (0);

	for (i = nmemb * size, ptr = myptr; i; i--)
		*ptr++ = 0;
	return (myptr);
}
