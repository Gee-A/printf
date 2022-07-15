#include "main.h"

/**
 * print_char - prints character
 * @arg: va_list parameter
 *
 * Return: 1 (Success)
 */
int print_char(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}
/**
 * print_sign - print sign
 * @arg: va_list parameter
 * @base: base 10, 8, 16, 2 etc..
 * Return: num of characters
 */
int print_sign(va_list arg, int base)
{
	int i = 0, count = 0;
	char *s;

	i = va_arg(arg, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		count += 1;
	}
	s = convert("0123456789ABCDEF", i, base);
	_puts(s);
	count += _strlen(s);
	return (count);
}
/**
 * print_unsign - print_unsign
 * @arg: va_list parameter
 * @base: base 10, 8, 16 etc..
 * Return: num of characters
 */
int print_unsign(va_list arg, int base)
{
	int count = 0;
	unsigned int i;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert("0123456789ABCDEF", i, base);
	_puts(s);
	count = _strlen(s);

	return (count);

}
/**
 * print_string - print string
 * @arg: va_list parameter
 * Return: num of characters
 */
int print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";

	_puts(s);
	return (_strlen(s));
}

/**
 * print_base16_upper_lower - print_base16_upper_lower
 * @arg: va_list parameter
 * @representation: pointer parameter
 * Description: This function takes 0123456789ABCDEF or 0123456789abcdef
 * in representation parameter for print hexadecimal format
 * Return: num of characters
 */
int print_base16_upper_lower(va_list arg, char *representation)
{
	unsigned int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert(representation, i, 16);
	_puts(s);
	cont = _strlen(s);
	return (cont);

}
