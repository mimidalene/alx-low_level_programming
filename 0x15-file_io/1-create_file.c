#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: an array of characters, blanks, newlines and
 * tabs to write into the file after creating
 *
 * Description: this function creates a file and writes to it with
 * the texts passed to it as an argument
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wfd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; ++i)
		;

	wfd = write(fd, text_content, i);
	if (wfd == -1)
		return (-1);

	close(fd);

	return (1);
}
