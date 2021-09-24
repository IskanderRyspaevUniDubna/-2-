#include "MyFunctions.h"
double fi(double x)
{
	return (x - 0.1) * (x - 0.1) * (x - 0.1) * (x - 0.1) + 0.1;
}
double Iter(double x0, double eps)
{
	double x1, delta_x;
	do
	{
		x1 = fi(x0);
		delta_x = abs(x1 - x0);
		x0 = x1;
	} while(delta_x > eps);
	return x0;
}