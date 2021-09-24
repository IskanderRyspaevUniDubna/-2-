#include "Factorial.h"
int factor(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else {
		return n * factor(n - 1);
	}
}
int factor_iter(int n)
{
	int res = 1;
	if (n == 0)
	{
		return res;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			res *= i;
		}
		return res;
	}
}