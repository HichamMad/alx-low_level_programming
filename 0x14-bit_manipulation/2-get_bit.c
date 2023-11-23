#include "main.h"
/**
  * get_bit - gets value of int at an index
  * @n: number to check in bits
  * @index: index at which checks start
  * Return: value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index > 63)
		return (-1);

	b = 1 << index;
	return ((n & b) > 0);
}
