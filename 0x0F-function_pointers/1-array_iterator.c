#include <stdio.h>
/**
 * array_iterator - performs an action on array
 * @array: array to act on
 * @size: size of array
 * @action: function to execute on array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
