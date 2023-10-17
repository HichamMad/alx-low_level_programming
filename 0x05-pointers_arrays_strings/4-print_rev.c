#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int r;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (r = length; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

