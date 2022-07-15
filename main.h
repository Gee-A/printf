#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
/*
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

**
 * struct printHandler - struct to choose the right function
 * depending on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 *
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph; */

int _putchar(char c);
void _puts(char *str);
void print_number(va_list ap, int base, int sign, int caps);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert(char hexa_dec[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_char(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);

#endif
