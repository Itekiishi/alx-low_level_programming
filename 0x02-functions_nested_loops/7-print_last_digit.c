#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer 
 * Description: prints the last digit of a number 
 * Return: interger
 */

int print_last_digit(int n)
{
	int last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putcher(last + '0');
	return (last);
}
