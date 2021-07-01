#include "holberton.h"
/**
 * string_toupper - changes lowercases to uppercases
 * @src: char
 * Return: char
 **/
char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] > 96 && src[i] < 123)
		{
			src[i] -= 32;
		}
	}
	return (src);
}
