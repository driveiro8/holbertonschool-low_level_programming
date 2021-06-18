#include <stdio.h>

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
