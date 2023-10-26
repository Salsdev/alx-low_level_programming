#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *  @n: integer
 *  @index: index to set 1
 *  Return: integer (1 success, -1 error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mal;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mal = 1;
	mal = mal << index;
	mal = ~mal;
	*n = *n & mal;

	return (1);
}
