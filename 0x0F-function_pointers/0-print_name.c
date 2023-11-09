#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: input string
 * @f: function pointer pointed to a char pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
