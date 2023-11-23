#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string that contains binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;

	if (b == NULL)
		return (0);
	for (a = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			a = a << 1;
		}
		else if (*b == '1')
		{
			a = a << 1;
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
