#include "main.h"

/**
  * bin_recursive - function to convert
  * numbers in binary in recursive
  * @num: num to print
  * @len: length of num to print
  * Return: length
  */

int bin_recursive(unsigned int num, int len)
{
	if (num / 2)
	{
		len = bin_recursive(num / 2, len + 1);
	}
	_putchar(num % 2 + '0');

	return (len);
}

/**
  * print_binary - function that takes in unsigned
  * int and prints its binary equivalent
  * @parameter_args: unsigned int argument
  * Return: no. of digits printed
  */

int print_binary(va_list parameter_args)
{
	int count = 0;

	unsigned int num = va_arg(parameter_args, unsigned int);

	count = bin_recursive(num, count) + 1;
	return (count);
}
