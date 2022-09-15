#include <stdio.h>

/**
  *main - prints the fizz buzz test
  *Return: should return a 0 value
  *
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return (0);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy

