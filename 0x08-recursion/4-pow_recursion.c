#include "main.h"
/**
* _pow_recursion - fxn that returns the value of x raised to the power of y
* @x: value to raise
* @y: power
* Return:0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
		int  i = pow_recursion(x, y / 2);
	return (i * i);
	else
		return (x * _pow_recursion(x, y - 1));
}
