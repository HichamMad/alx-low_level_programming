#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - output minimum number of coins to make change
 * @argc: number of arguments
 * @argv: strings of arguments
 * Return: 1 if error, 0 if success
 */
int main(int argc, char **argv)
{
	int cen, coi = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cen = atoi(argv[1]);
	while (cen >= 25)
	{
		coi++;
		cen = cen - 25;
	}
	while (cen >= 10)
	{
		coi++;
		cen = cen - 10;
	}
	if (cen >= 5)
	{
		coi++;
		cen = cen - 5;
	}
	while (cen >= 2)
	{
		coi++;
		cen = cen - 2;
	}
	if (cen == 1)
		coi++;
	printf("%d\n", coi);
	return (0);
}
