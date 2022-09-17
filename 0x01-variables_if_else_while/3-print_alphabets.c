#include <stdio.h>

/**
 *main - Alphabets
 *Return: None
 */

int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
