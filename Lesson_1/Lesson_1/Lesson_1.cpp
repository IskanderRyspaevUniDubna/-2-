#include <iostream>
#include <cmath>
#include "MySin.h"
using namespace std;
int main()
{
    double xmin, xmax, dx = 0.05, x;
    int n;
    xmin = -3.1415926;
    xmax = 3.1415926;
    n = (int)((xmax - xmin) / dx) + 1;
    for (int i = 0; i < n; i++) 
    {
        x = xmin + i * dx;
        cout << x << " \t " << Sin(x) << " \t " << sin(x) << "\n";
    }
    return 0;
}
