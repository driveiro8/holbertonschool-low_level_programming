#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s : character
 *
 **/
void print_rev(char *s)
{
	int i;
	int x;

	x = _strlen(s);

	for (i = x ; *(s + i - 1) != '\0' ; i--)
	{
		_putchar(*(s + i - 1));
	}
	_putchar('\n');
}
