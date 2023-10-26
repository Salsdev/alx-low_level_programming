#include "main.h"

/**
 *  _power - This function is going to calculate base ^ power
 *  @power: This will be the power of the exponent
 *  @base: This is the base of the exponent
 *
 *  Return: value of base ^ power is returned
 */

unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int digit;
	unsigned int b;

	digit = 1;
	b = 1;
	while (b <= power)
	{
		digit = digit * base;
		b++;
	}
	return (digit);
}

/**
 * print_binary - This function is going to print a number in binary notation
 * @n: This is the number to be printed
 *
 * Return: void is returned
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char sa;

	sa = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			sa = 1;
			_putchar('1');
		}
		else if (sa == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
