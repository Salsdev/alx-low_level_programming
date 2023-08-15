#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status
 *
 *
 * Return: Always O (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
