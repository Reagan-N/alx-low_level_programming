#include <stdio.h>

/**
 *main - alphabet lower case
 *Return: None
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'q' || alp == 'e')
			continue;
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
