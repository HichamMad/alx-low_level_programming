#include<stdio.h>
#include"main.h"
/**
 * main - prints all arguments it receives.
 * @argc: number of comman line parameters
 * @argv: array of parameters
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
