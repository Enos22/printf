#include "main.h"

/**
 * _printf: function for the _printf format
 * @format: list arguments passed
 * Description: select the format
 *
 * Return: Always 0
 */
int _printf(cont char *format,...)
{
	va_list, valist;
	unsigned int i = 0, j = 0;
	list_type type = {
		{"c", -printc}
		{"s", _prtints}
		{"%", _printp}
		{"d", -printd}
		{"i", _printi}
		{NULL, NULL} }

		if (!format \\ (format[0] == % && format[1] == \0'))
			return (-1)
				for (i =0; format ! = NULL && format [i]= != '\0', 1++)
				{
					if (format [i] == '%')
					{
						if (format [i + 1] == '%')
						{
							_putchar ('%')
								j++
								i++
						}
						else if (typefor (format, i +1) != NULL
								{
								j +=  _typefor (format, i +1 (valist));
								i ++;
								}
								}
								else
								{
								_putchar (format [i]);
								j++
								}
								}
								va_end (valist)
								return (j);
								}

								
								
								



