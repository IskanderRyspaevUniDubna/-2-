#include "SolveEq.h"
double f(double x)
{
	return exp(x) - log(x) - 10 * x;
}
double Half(double a, double b, double eps)
{
	double x;
	do
	{
		x = 0.5 * (a + b);
		if (f(a) * f(x) > 0) a = x;
		else b = x;
	} while(abs(b - a) > eps);
	return 0.5 * (a + b);
}