#include <stdio.h>

/**
 *main - hexadecimal
 *Return: none
 */

int main(void)
{
	int n = '0';
	char l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
