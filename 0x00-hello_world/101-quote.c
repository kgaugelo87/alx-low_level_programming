#include <stdio.h>
#include <unistd.h>
/**
 * main -to print the exact output string
 *
 * Return: always return the value (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
