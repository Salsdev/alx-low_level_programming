#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	char ch = 'a';
	char ah = 'A';

	while (ch <= 'z' && ah <= 'Z')
	{
		putchar(ch);
		putchar(ah);
		++ch;
	}
	putchar('\n');

	return (0);
}
