#include "main.h"

/**
 * inputter - func to receive all printf input
 * @format: func param 1
 * @f_list: func param 2
 * @arg_list: func param 3
 * Return: total count of char printed
 */

int inputter(const char *format, con_vert f_list[], va_list arg_list)
{
	int i, j, return_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					return_val = f_list[j].f(arg_list);
					if (return_val == -1)
						return (-1);
					printed_chars += return_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_write_char(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
