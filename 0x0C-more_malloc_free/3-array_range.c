#include <stdlib.h>
#include "main.h"
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *ret, *ptr;
	int size = max - min + 1;

	if (min > max)
		return (0);
	ret = malloc(size * sizeof(int));
	if (ret == 0)
		return (0);

	ptr = ret;
	while (size--)
		*ptr++ = max - size;

	return (ret);
}
