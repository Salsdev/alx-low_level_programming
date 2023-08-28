#include "main.h"

/**
 * main - Entry point
 *
 * Description: lowercase
 *
 * Resturn: Always 0 (Success)
 */

ínt islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
