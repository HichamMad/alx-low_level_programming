#include <stdio.h>

void prior(void) __attribute__ ((constructor));

/**
  * prior - prints something before the main function is executed.
  * Return: Nothing.
  */
void prior(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
