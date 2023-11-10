#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *fav_song;
	va_list p_songs;

	for (i = 0; i < n; i++)
	{
		fav_song = va_arg(p_songs, char*);
		if (fav_song == NULL)
			printf("nil");
		else
			printf("%s", fav_song);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p_songs);
}



