#include <stdio.h>

/**
 *main - alphabet lower case
 *Return: None
 */

int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q' && alp != 'e')
			putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
