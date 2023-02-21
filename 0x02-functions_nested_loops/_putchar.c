#include "main.h"
#include <unistd.h>
/**
 * _putchar - writs the character c to the standard output
 * @c: the character to print
 *
 * Return: on success 1
 * On erro, -1 is returned and errno is set appropriately
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
