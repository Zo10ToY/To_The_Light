// Розробник програми Косих Анатолiй К-13, варiант 162

#include <iostream>
#include <iomanip>
#include "..\Copyright\Copyright.h"
#include "calculation.h"

using namespace std;

void firstLine()
{
	cout << "             x |         f(x) |      S(x) | S(x)-f(x) | " << endl;
	cout << "---------------+--------------+-----------+-----------+ " << endl;
}

void printLine(double k1, double k2, double k3, double k4, int d1, int d2, int d3, int d4, int w1, int w2, int w3, int w4)
{
	cout << setw(w1) << setprecision(d1) << k1 << setw(w2) << setprecision(d2) << k2 << setw(w3) << setprecision(d3) << k3 << setw(w4) << setprecision(d4) << k4 << endl;
}

void tabulate (double a, double b, double h, double eps)
{
	int d1 = 4; int d2 = 6; int d3 = 6; int d4 = 6; int w1 = 15; int w2 = 15; int w3 = 12; int w4 = 12;
	double x = a; 
	double fx;
	double Sx;
	double run_prog = b - h / 100000;
	firstLine();
	cout << fixed;
	
	while (x < run_prog)
	{
		fx = f_162(x);
		Sx = S_162(x,eps);
		printLine (x, fx, Sx, Sx - fx, d1, d2, d3, d4, w1, w2, w3, w4);
		x = x + h;
	}
	fx = f_162(b);
	Sx = S_162(b, eps);
	printLine (b, fx, Sx, Sx - fx, d1, d2, d3, d4, w1, w2, w3, w4); cout << endl;

}


int main()
{
	// Програма табулює функцiї f(x), S(x) та S(x)-f(x) на вiдрiзку [a;b] з кроком h, котрi задаєте Ви у межах [-0,2;0,2]
	double a, b, h, eps;
	setlocale(LC_ALL, "Ukrainian"); system("color 0F");
	Copyright(); cout << endl;
	cout << "Програма табулює функцiї f(x), S(x) та S(x)-f(x) на вiдрiзку [a;b] з кроком h," << endl;
	cout << "котрi задаєте Ви у межах [" << a0 << "; " << b0 << "]" << endl << endl;
	cout << "Введiть а >= " << a0 << " (початок вiдрiзку): ";
	cin >> a; system("color F0");
	cout << "Введiть b <= " << b0 << " (кiнець вiдрiзку): ";
	cin >> b; system("color 0F");
	cout << "Введiть h > 0 (крок табулювання): ";
	cin >> h; system("color F0");
	cout << "Введiть eps > 0 (точнiсть обчислення суми): ";
	cin >> eps; cout << endl;
	cout << "Ви ввели: " << a << ", " << b << ", " << h << ", " << fixed << setprecision(10) << eps << endl;
	cout << endl;

	if (a >= a0 && b <= b0 && h > 0 && a <= b && eps > 0)
	{
		tabulate(a, b, h, eps); system("color 1F");
	}
	else
	{
		cout << "Параметри введенi некоректно" << endl; system("color 4F");
	}

	system("pause");
	return 0;
}