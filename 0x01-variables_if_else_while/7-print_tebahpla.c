#include <stdio.h>
/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char charC;

	for (charC = 'z'; charC >= 'a'; --charC)
	{
		putchar(charC);
	}
	putchar('\n');

	return (0);
}
