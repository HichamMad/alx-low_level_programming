#include "main.h"
#include <stdio.h>

/**
 * print_binary - print an usigned int to binary
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int new;
	int bitw;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (new = n, bitw = 0; (new >>= 1) > 0; bitw++)
		;

	for (; bitw >= 0; bitw--)
	{
		if ((n >> bitw) & 1)
			printf("1");
		else
			printf("0");
	}
}
