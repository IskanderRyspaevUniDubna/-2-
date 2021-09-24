#include "MySin.h"
double Sin(double arg) 
{
	double eps = 1e-6;
	double rn;
	double sum;
	sum = 0;
	rn = arg;
	for (int i = 1; ; i++) {
		if ((rn < eps) && (rn >- eps)) return sum;
		sum += rn;
		rn *= -arg * arg / (2 * i) / (2 * i + 1);
	}
}