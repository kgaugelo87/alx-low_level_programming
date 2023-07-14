#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -determine number whether is positive or negative
 *
 * Return: always value is (0)
 *
 */
int main(void)
{
	int n;
	int modus;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modus = n % 10;

	if (modus > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, modus);
	} else if (modus < 6 && modus != 0)
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, modus);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, modus);
	}
	return (0);
}
