#include "main.h"

/**
  * print_rot13 - function that converts ROT13
  * to mtext
  * @parameter_args: argument
  * Return: number of chars printed
  */

int print_rot13(va_list parameter_args)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i, j;
	int count;
	char *str;

	count = 0;
	str = va_arg(parameter_args, char *);
	if (str == NULL)
		str = "NUL";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (in[j] == '\0')
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
