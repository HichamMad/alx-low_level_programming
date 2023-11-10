#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sing;
       	char *str = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(all, double));
					break;
				case 'i':
					printf("%s%f", str, va_arg(all, int));
					break;
				case 's':
					sing = va_arg(all, char *);
					if (!sing)
						sing = "(nil)";
					printf("%s%s", str, sing);
					break;
				default:
					i++;
					continue;
			}
			str = ", ";
			i++;
		}
	}
printf("\n");
va_end(all);
}

