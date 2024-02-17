#include "main.h"
#include <stdio.h>

/**
 * create_file- creating a new file in c
 * @filename: our filename: a pointer to our file that we going to create
 * @text_content: pointer to the information that needs to be written
 * Return: returns 0 on success but returns -1 when failed
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fid;
	int length = 0;
	int wrt;

	if (filename != NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fid = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	wrt = write(fid, text_context, length);

	if (rid == -1)
		return (-1);

	if (wrt == -1)
		return (-1);

	close(rid);
	return (1);
}
