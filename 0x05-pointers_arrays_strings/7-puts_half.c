#include "main.h"
/**
 * puts_half -  prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input's string
 * Return: half of input str
 */
void puts_half(char *str)
{
	int i, n, length;

	length = 0;

	for (i = 0; str[i] != '\0'; a++)
		length++;

	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
i
