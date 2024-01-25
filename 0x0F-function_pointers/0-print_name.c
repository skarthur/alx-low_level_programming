#include "function_pointers.h"
/**
 * print_name - Prints function name
 * @name: Name to print
 * @f: function pointer casted to char pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
