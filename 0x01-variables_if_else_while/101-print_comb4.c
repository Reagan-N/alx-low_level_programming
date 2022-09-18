#include<stdio.h>

/**
 *main - Entry
 *Return: None
 */

int main(void)
{
	int a = '0', b = '0', c = '0';

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (a != b && b != c && a != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
