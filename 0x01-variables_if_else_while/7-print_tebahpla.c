#include <stdio.h>

/**
 *main - Smile in the mirror
 *Return: None
 */

int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		m--;
	}
	putchar('\n');
	return (0);
}
