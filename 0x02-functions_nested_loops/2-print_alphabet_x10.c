#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i, co;
	co = 0;

	while (co < 10)
	{
		for (ni= 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		co++;
		_putchar('\n');
	}
}
