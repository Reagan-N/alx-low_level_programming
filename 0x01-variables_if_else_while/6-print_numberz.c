#include <stdio.h>

/**
 *main - numbers
 *Return: None
 */

int main(void)
{
	int p = '0';

	while (p <= '9')
	{
		putchar(p);
		p++;
	}
	putchar('\n');

	return (0);
}
