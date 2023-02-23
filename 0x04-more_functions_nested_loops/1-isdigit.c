#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 *
 * @c: the number to be checked
 *
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
		return (1);
	else
		return (0);
}
