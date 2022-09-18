#include<stdio.h>

/**
 *main - inventing
 *Return: none
 */

int main(void)
{
	int t = 0, r = 0;

	while (t <= 9)
	{
		r = 0;
		while (r <= 9)
		{
			if (t != r && t < r)
			{
				putchar(t);
				putchar(r);

				if (!(t == 8 && r == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			r++;
		}
		t++;
	}
	putchar('\n');
	return (0);
}
