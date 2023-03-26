#include "main.h"

/**
  * _printf - function to do formatted
  * printing
  * @format: first argument, character string
  * @...: signifies variadic input
  * Return: Number of chars printed, exclude null
  */

int _printf(const char *format, ...)
{
	int i, len = 0;
	int (*ptr)(va_list);

	va_list parameter_args;

	va_start(parameter_args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			i++;
			if (!format[i])
				return (-1);
			ptr = get_sfunc(format[i]);
			if (ptr == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				len += 2;
			}
			else
			{
				len += ptr(parameter_args);
			}
		}
	}
	va_end(parameter_args);

	return (len);
}
