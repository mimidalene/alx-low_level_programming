#include "main.h"

/**
  *print_number - prints an integer
  *@n: digit to be send to output
  *Return: Void
  *
  */

void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		p = -n;
		_putchar('-');
	}
	else
	{
		p = n;
	}

	if (p / 10)
	{
		print_number(p / 10);
	}

	_putchar((p % 10) + '0');
}
