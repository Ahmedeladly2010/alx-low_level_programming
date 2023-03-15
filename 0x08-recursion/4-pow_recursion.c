#include "main.h"
/**
 * _pow_recursion - computes the power of an integer
 * @x: base integer
 * @y: exponent integer
 *
 * Return: result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
