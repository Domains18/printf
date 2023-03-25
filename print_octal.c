#include "main.h"

/**
  * print_oct - function that prints
  * base 8 representation of dec number
  * @parameter_args: unsigned int arg
  * Return: no. of chars printed
  */

int print_oct(va_list parameter_args)
{
	int i = 0, j = 0;
	unsigned int n = va_arg(parameter_args, unsigned int);
	int a[sizeof(int) * 8 + 1];

	if (n < 8)
	{
		_putchar(n + '0');
		i++;
		return (i);
	}
	else
	{
		while (n > 8)
		{
			a[j] = n % 8;
			n /= 8;
			j++;
		}

		if (n < 8)
		{
			a[j] = n;
		}

		while (j >= 0)
		{
			_putchar(a[j] + '0');
			i++;
			j--;
		}
	}
	return (j);
}
