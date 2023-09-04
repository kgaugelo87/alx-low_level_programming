#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: our file that is being read
 * @letters: number of letters it should read and print
 * Return: actual number of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t fw, fr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	fr = read(fd, buff, letters);
	fw = write(STDOUT_FILENO, buff, fr);

	free(buff);
	close(fd);
	return (fw);
}
