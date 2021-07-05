#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x;

	x = 0;

		for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				x++;
		}
	}
	return (x);
}
