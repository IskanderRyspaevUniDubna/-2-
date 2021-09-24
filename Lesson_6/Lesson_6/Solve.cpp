#include "Solve.h"
double function(double x, int flag)
{
	if (flag == 0)
	{
		return (x - 0.1) * (x - 0.1) * (x - 0.1) * (x - 0.1) - x + 0.1;
	}
	else if (flag == 1)
	{
		return 4 * (x - 0.1) * (x - 0.1) * (x - 0.1) - 1;
	}
}
double kass(double x0, double eps)
{
	double dx, x1;
	do
	{
		dx = function(x0, 0) / function(x0, 1);
		x1 = x0 - dx;
		x0 = x1;
	} while (dx > eps);
	return x1;
}