#include "main.h"

/**
  * print_unsigned - function to print unsigned
  * integer
  * @parameter_args: input argument
  * Return: count of characters printed
  */

int print_unsigned(va_list parameter_args)
{
	int i = 0;
	unsigned int n = va_arg(parameter_args, unsigned int);
	int j = 1;

	while ((n / j) > 9)
		j *= 10;

	while (j > 0)
	{
		_putchar((n / j) + '0');
		i++;
		n %= j;
		j /= 10;
	}
	return (i);
}
