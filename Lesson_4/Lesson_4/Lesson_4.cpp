#include <iostream>
#include <fstream>
#include "SolveEq.h"
using namespace std;
int main()
{
	double xmin, xmax, h, x, y;
	int n = 100;
	xmin = 0.001;
	xmax = 5;
	h = (xmax - xmin) / n;
	ofstream file("result.txt");
	for (int i = 0; i < n; i++)
	{
		x = xmin + i * h;
		y = f(x);
		file << x << "\t\t" << y << endl;
	}
	file.close();
	cout << Half(0.001, 1, 1e-3) << endl;
	cout << Half(3, 4, 1e-3) << endl;

	return 0;
}
