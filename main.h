#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - def struct for symbols and functions
 * @sym: symbol
 * @f: the function
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert con_vert;

/* Main functions protoypes here */
int inputter(const char *format, con_vert f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_number(va_list);
int print_str_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int, char);
int hex_check(int num, char x);

/* Extra Functions prototypes here */
unsigned int base_length(unsigned int, int);
char *rev_string(char *);
void write_base_str(char *str);
int print_unsigned_number(unsigned int);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
