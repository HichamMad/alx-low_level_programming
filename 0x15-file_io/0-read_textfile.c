#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: size of letters
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, lr, lw;
	char *buf;

	buf = malloc(letters);
	if (!buf)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buf);
		return (0);
	}

	lr = read(file, buf, letters);

	lw = write(STDOUT_FILENO, buf, lr);

	close(file);

	return (lw);
}
