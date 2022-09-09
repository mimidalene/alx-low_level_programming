/*
 *
 */

#inlude < stdib.h >
#include <time.h>
#include <stdio.h>

/**
 *main - Prints a random number and states whether
 its positive, negative or zero.
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	IF(n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		priintf("%d is zero\n", n);

	return (0);
}
