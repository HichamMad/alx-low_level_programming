#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: content of the file.
 * Return: 1 if the file exists. -1 Otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;
	int fd = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fd = 0; text_content[fd];)
			fd++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, fd);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
