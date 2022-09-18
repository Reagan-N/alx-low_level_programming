#include<stdio.h>

/**
 *main - Entry
 *Return: None
 */

int main(void)
{
	int a = 0, b = 0, c = 0;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		for (b = 0; b <= 9; b++)
		{
			c = 0;
			for (c = 0; c <= 9; c++)
			{
				if (a != b || b != c || a != c || a < b || b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < 7 || b < 8 || c < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
