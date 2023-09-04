#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: our file that is being read
 * @letters: number of letters it should read and print
 * Return: actual number of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, fw, fr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	fr = read(fd, buff, letters);
	fw = write(STDOUT_FILENO, buff, fr;

	free(buff);
	close(fd);
	return (fw);
}
