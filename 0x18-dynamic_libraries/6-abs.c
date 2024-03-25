#include "main.h"

/**
 * _abs - absolute value of an integer
 * @c: number computed
 * Return: return absolute value
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absvalue;

		absvalue = c * -1;
		return (absvalue);
	}
	return (c);
}
