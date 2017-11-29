// Розробник програми Косих Анатолiй К-13, варiант 162

#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

double f_162 (double x)
{
	double res;
	res = pow(1.0 - 4.0 * x, -3.0 / 2.0);
	return res;
}

double S_162(double x, double eps)
{
	int n; double con; double sum = 0;
	n = 0;
	con = 1;
	while (abs(con) >= eps)
	{
		sum += con;
		n++;
		con *= x *  (2.0 * n) * (2.0 * n + 1.0) / (n * n);
	}
	return sum;
}