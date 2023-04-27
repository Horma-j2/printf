#include "main.h"

/**
 * print_number - func to print num
 * @args: func param
 * Return: num
 */

int print_number(va_list args)
{
	int n;
	int len;
	int div;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 * print_unsigned_number - func for unsigned number
 * @n: func param
 * Return: num count
 */

int print_unsigned_number(unsigned int n)
{
	int len;
	int div;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

