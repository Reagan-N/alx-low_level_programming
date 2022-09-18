#include<stdio.h>

/**
 *main - Perseverance
 *Return: none
 */

int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		if (k <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
