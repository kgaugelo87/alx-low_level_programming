#include <stdio.h>
/**
 * main -produce the exact same output
 *
 * Return: always return the value of (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu bytes(s)\n", sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(d));
	printf("Size of a float: %lu bytes(s)", sizeof(e));
	return (0);
}
