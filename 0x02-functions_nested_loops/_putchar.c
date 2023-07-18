#include <unistd.h>

/**
 * _putchar - fuunction to write character c
 *
 * Return: always return 1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
