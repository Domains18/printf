#include "main.h"

/**
  * print_hex - function to print an unsigned
  * int to hex format
  * @n: unsigned int to print
  * @c: flag, determines case to print,
  * 0 lower, 1 upper
  * Return: number of digits printed
  */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, j, sum;
	int count;
	char diff;

	j = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';

	a[0] = n / j;
	for (i = 1; i < 8; i++)
	{
		j /= 16;
		a[i] = (n / j) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count++;
		}
	}
	return (count);
}

/**
  * print_x - function that prints an
  * unsigned int in loercase hex
  * @parameter_args: unsigned int
  * Return: number of difgits printed
  */

int print_x(va_list parameter_args)
{
	return (print_hex(va_arg(parameter_args, unsigned int), 0));
}

/**
  * print_X - function that prints an
  * unsigned int in uppercase hex
  * @parameter_args: unsigned int
  * Return: number of digits printed
  */

int print_X(va_list parameter_args)
{
	return (print_hex(va_arg(parameter_args, unsigned int), 1));
}
