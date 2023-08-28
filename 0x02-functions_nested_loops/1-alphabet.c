#include "main.h"

/**
 * main - starting point
 *
 * Description: Alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar (10);
}
