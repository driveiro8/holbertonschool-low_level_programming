#include "holberton.h"
/**
 * _strchr - a function that locates a character
 * @s: char
 * @c: char
 * Return: char
 **/
char *_strchr(char *s, char c)
{
	int i;
	if (*s != '\0')
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			return (s + i);
		}

	return ('\0');
}
