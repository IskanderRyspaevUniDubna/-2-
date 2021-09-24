#include <iostream>
#include "integral_rectangle.h"
using namespace std;
int main()
{
	cout << func(0, 1, 0.0000001) << endl;
	cout << func_2(0, 1, 0.0000000001) << endl;

	return 0;
}
