#include "holberton.h"
/**
  * clear_bit - sets a bit at index to zero at given index
  * @n: paramater
  * @index: index to change
  * Return: 1 on success , 0 otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}
