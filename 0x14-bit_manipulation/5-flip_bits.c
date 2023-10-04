#include "main.h"

/**
 * flip_bits - returns the number of bits to flip number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change (integer)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int sal;

	sum = 0;
	sal = n ^ m;
	while (sal)
	{
		sum += sal & 1;
		sal = sal >> 1;
	}
	return (sum);
}
