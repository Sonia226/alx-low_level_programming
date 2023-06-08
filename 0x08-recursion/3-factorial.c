#include "main.h"
/**
* factorial -  function that returns the factorial of a given number.
* @n: number to return
* Return: 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || 1)
	{
		return  (1);
	}
	else
		(n > 2)
		return (n * factorial(n - 1));
}
