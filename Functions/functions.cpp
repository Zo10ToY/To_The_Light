// Розробник програми Косих Анатолій К-13

#define _USE_MATH_DEFINES
#include <stdexcept>
#include <math.h>

using namespace std;

double f0_162(double x)
{
	double z;
	z = (log(7.0 * x) / log(5.0) + (M_PI / 18));
	return z;
}

bool domain_162(double a)
{
	bool z;
	if (a > 0) { z = true; }
	else { z = false; }
	return z;
}

bool f_162(double x, double &y)
{
	if (domain_162(x))
	{
		y = f0_162(x);
		return true;
	}
	else return false;
}

double f_exc_162(double x) {
	if (domain_162(x)) {
		return f0_162(x);
	}
	else { throw domain_error ("Неможливо обчислити"); }
}