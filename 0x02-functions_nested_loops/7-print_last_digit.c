#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number input
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int num;

	num = (n % 10);
	if (num < 0)
	{
		num *= -1;
	}
	_putchar(num + '0');

	return (num);
}
