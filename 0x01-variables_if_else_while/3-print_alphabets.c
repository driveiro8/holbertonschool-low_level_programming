#include <stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char charC, line;

	line = '\n';
	for (charC = 'a'; charC <= 'z'; charC++)
	{
		putchar (charC);
	}
	for (charC = 'A'; charC <= 'Z'; charC++)
	{
		putchar (charC);
	}
	putchar(line);


	return (0);

}
