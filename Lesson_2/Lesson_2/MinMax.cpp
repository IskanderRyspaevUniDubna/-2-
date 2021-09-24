#include "MinMax.h"
double f(double x)
{
	return pow(x + 1, 3) + 5 * pow(x, 2);
}
double findMin(double a, double b, double eps)
{
	double phi = (1.0 + sqrt(5)) * 0.5;
	double x1, x2;
	do
	{
		x1 = b - (b - a) / phi;
		x2 = a + (b - a) / phi;
		if (f(x1) >= f(x2))
		{
			a = x1;
		} 
		else
		{
			b = x2;
		}

	} while (abs(b - a) > eps);
	return 0.5 * (a + b);
}