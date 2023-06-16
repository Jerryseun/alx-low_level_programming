#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print is positive if greater than  0, is negative if less than 0
 * and is zero if 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
