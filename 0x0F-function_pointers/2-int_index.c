#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - searches for an integer
  * @array: pointer to the array
  * @size: size of the array
  * @cmp: pointer to the function
  * Return: index of the first element found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
