#include <stdio.h>

int main (void)
{
	char charC, line;
	line = '\n';
	for (charC='a'; charC <='z'; charC++)
		if (charC == 'q'){
		continue;
		}
		else if (charC == 'e'){
		continue;
		}
	else
	{
		putchar (charC); 
	}
	
	putchar(line);

	return (0);

}
