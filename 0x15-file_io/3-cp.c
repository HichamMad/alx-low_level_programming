#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: arrgument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int lnr, lnw, a, b, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	lnr = open(argv[1], O_RDONLY);
	if (lnr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	lnw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(lnr, buf, BUFSIZ)) > 0)
	{
		if (lnw < 0 || write(lnw, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(lnr);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(lnr);
	c = close(lnw);
	if (b < 0 || c < 0)
	{
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", lnr);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", lnw);
		exit(100);
	}
	return (0);
}
