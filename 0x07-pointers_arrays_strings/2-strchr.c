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

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
