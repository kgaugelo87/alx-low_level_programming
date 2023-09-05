#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: NULL create an empty file
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content)
	{
		while (text_content[len])
			len++;
		fw = write(fd, text_content, len);
	}
	if (fd == -1 || fw == -1)
		return (-1);
	close(fd);
	return (1);
}
