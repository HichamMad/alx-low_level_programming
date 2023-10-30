#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of parameters
 * @argv: array of parameters
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /* ignore argv without generating warnings*/
printf("%d\n", argc - 1);
return (0);
}

