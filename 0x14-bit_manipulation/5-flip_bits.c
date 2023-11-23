#include "main.h"

/**
 * flip_bits - a function that returns the number
 * of bits you would need to flip
 *
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fbit;

	for (fbit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			fbit++;
	}

	return (fbit);
}
