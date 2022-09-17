#include <stdio.h>

/**
 *main - Alphabets
 *Return: None
 */

int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z' || ALP <= 'Z')
	{
		putchar(alp);
		alp++;
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
