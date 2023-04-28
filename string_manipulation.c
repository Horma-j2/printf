#include "main.h"

/**
 * print_str_reversed - calls the reserve function
 * @arg: func 1
 * Return: printed chars count
 */

int print_str_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_write_char(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rot13 - convert string to the rot13
 * @list: func param 1
 * Return: string converted
 */

int rot13(va_list list)
{
	int i;
	int j;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == s[j])
			{
				_write_char(sr[j]);
				break;
			}
		}
		if (j == 53)
			_write_char(str[i]);
	}
	return (i);
}
