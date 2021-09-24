#include "integral_rectangle.h"
double f(double x)
{
	return 4.0 / (1.0 + x * x);
}

double func(double a, double b, double h)
{
	double S = 0;
	double x = a + 1. * h / 2;
	int N = (int)((b - a) / h) + 1;
	for (int i = 0; i <= N; i++)
	{
		S += f(x) * h;
		x += h;
	}
	return S;
}

double func_2(double a, double b, double eps)
{
	int N = 3; // Число точек
	double S0, S1;
	S1 = 0.5 * (b - a) * (f(a) + f(b));
	do
	{
		N += 1;
		S0 = S1;
		double h = (b - a) / N;
		S1 = 0.5 * h * (f(a) + f(b));
		for (int i = 1; i <= N - 1; i++) {
			double x = a + h * i;
			S1 += h * f(x);
		}
	} while (abs(S1 - S0) > eps);

	return S1;
}