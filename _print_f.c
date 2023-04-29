#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters
 * print a formated string
 * @format: pointer to a formatted string
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	con_vert f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_str_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling inputter function*/
	printed_chars = inputter(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
