#include "holberton.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	for (i = 0; *(str + i) != '\0'; str++)
	{
		_putchar (*str)
	}
	_putchar ('\n');
}
