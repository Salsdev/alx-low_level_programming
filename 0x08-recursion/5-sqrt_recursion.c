#include "main.h"

/**
 * _sqrt_recursion - This function will
 * return the natural square root of a number
 * @n: This will be the first value
 *
 * Return: This will return the solution
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}
