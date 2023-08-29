#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int iter, j, cal_1 = 0, cal_2 = 0, d, l = 0;

	d = size - 1;
	for (iter = 0; iter < size; iter++)
	{
		for (j = 0; j < size; j++)
		{
			if (iter == j)
				cal_1 += a[l];
			if (j == d)
				cal_2 += a[l];
			l++;
		}
		d--;
	}
	printf("%i, %i\n", cal_1, cal_2);
}
