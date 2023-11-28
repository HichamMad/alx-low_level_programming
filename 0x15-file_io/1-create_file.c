#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created.
 * @text_content: content file.
 *
 * Return: 1 if it success , otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int idx = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[idx] != '\0')
	{
		idx++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write(fd, text_content, idx);

	return (1);
}
