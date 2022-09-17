#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Last digit
 *Return: None
 */
int main(void)
{
	int n, L_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L_d = n % 10;
	if (L_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, L_d);
	else if (L_d == 0)
		printf("Last digit of %d is %d and is 0\n", n, L_d);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L_d);
	return (0);
}
