#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, else -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes out the string input to stdout
 * @str: the string inputed into the function.
 *
 * Return: always return 0 on success.
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (0);
}

/**
 *_strlen - counts number of character in a string
 *@s: pointer char
 *Return: length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * convert - converter a data set to the right format
 * @hexa_dec: hexa characters buffer
 * @num: denary for conversion
 * @base: the base to convert the number to.
 *
 * Return: a string of the formatted data.
 */
char *convert(char hexa_dec[], unsigned int num, int base)
{
	static char buffer[50];
	char *ptr;
	int position = 0;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		position = num % base;
		*--ptr = hexa_dec[position];
		num /= base;
	} while (num != 0);

	return (ptr);
}
