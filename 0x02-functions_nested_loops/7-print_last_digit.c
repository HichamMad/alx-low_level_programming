#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @r: the int we extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int a;

	if (r < 0)
	r = -r;

	a = r % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
