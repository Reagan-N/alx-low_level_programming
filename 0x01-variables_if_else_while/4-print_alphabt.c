#include <stdio.h>

/**
 *main - alphabet lower case
 *Return: None
 */

int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'q' || alp == 'e')
			continue;
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
