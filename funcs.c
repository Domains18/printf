#include "main.h"

/**
  * print_c - function to print a character
  * @parameter_args: char to print
  * Return: no. of characters, -1 if NULL
  */

int print_c(va_list parameter_args)
{
	char _char = va_arg(parameter_args, int);

	return (_putchar(_char));
}

/**
  * print_s - function to print a string
  * @parameter_args: string to print
  * Return: no. f chars, -1 if NULL
  */

int print_s(va_list parameter_args)
{
	int i;

	char *str = va_arg(parameter_args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
  * print_percent - function to print percent sign
  * @parameter_args: unused parameter
  * Return: Always 1
  */

int print_percent(__attribute__((unused))va_list parameter_args)
{
	char c = '%';

	_putchar(c);

	return (1);
}

/**
  * print_decimal - function to print base 10 num
  * @parameter_args: decimal to print
  * Return: no. of chars printed
  */

int print_decimal(va_list parameter_args)
{
	int num_arr[10];
	int i, num, list_member, j, count;

	list_member = va_arg(parameter_args, int);
	count = 0;
	num = 1000000000;
	num_arr[0] = list_member / num;

	for (i = 1; i < 10; i++)
	{
		num /= 10;

		num_arr[i] = (list_member / num) % 10;
	}

	if (list_member < 0)
	{
		_putchar('-');
		count++;

		for (i = 0; i < 10; i++)
		{
			num_arr[i] *= -1;
		}
	}

	for (i = 0, j = 0; i < 10; i++)
	{
		j += num_arr[i];

		if (j != 0 || i == 9)
		{
			_putchar('0' + num_arr[i]);
			count++;
		}
	}

	return (count);
}



/**
  * print_integer - function to print base 10 num
  * @parameter_args: int to print
  * Return: no. of chars printed
  */

int print_integer(va_list parameter_args)
{
	int num_arr[10];
	int i, num, list_member, j, count;

	list_member = va_arg(parameter_args, int);
	count = 0;
	num = 1000000000;
	num_arr[0] = list_member / num;

	for (i = 1; i < 10; i++)
	{
		num /= 10;

		num_arr[i] = (list_member / num) % 10;
	}

	if (list_member < 0)
	{
		_putchar('-');
		count++;

		for (i = 0; i < 10; i++)
		{
			num_arr[i] *= -1;
		}
	}

	for (i = 0, j = 0; i < 10; i++)
	{
		j += num_arr[i];

		if (j != 0 || i == 9)
		{
			_putchar('0' + num_arr[i]);
			count++;
		}
	}

	return (count);
}
