#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file and prints
 * @filename: is the file that we'll be reading and printing for this task
 * @letters: are the letters to be read and printed on our text file
 * Return: the read and printed information if successful else return 0
 * if it fails to write on our text file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fid;
	ssize_t wrt;
	ssize_t rd;

	fid = fopen(filename, O_RDONLY);
	if (fid == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	rd = fread(fid, buffer, letters;
	wrt = fwrite(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fid);
	return (wrt);
}
