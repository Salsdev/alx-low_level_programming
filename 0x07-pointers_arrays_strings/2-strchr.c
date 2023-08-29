#include <stdlib.h>
#include "main.h"
/**
 * *_strchr - This function will locate a character in a string.
 *
 * @s: This is the string in which you want to search for the target character.
 * @c: This is the target charater you want to find in the string.
 *
 * Return: This will return the pointer@s.
 */
char *_strchr(char *s, char c)
{
	unsigned int str;

	str = 0;

	while (s[str] != '\0')
	{
		if (s[str] == c)
		{
			return (s);
		}
		str++;
	}
	return (NULL);
}
