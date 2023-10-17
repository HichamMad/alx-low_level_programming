#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *n = str;
	int h;

	while (*n != '\0')
	{
		n++;
		longi++;
	}
	i = longi - 1;
	for (h = 0 ; h <= i ; h++)
	{
		if (h % 2 == 0)
	{
		_putchar(str[h]);
	}
	}
	_putchar('\n');
}

