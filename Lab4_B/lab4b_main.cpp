// Розробник програми Косих Анатолiй К-13

#include <iostream>
#include "../Copyright/copyright.h"
#include "../Functions/functions.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double z;
	Copyright();
	cout << "Програма проводить обислення виразу log_5 (7*х) + П/18 за введеним Х" << endl;
	cout << "Введiть X > 0" << endl;
	cin >> z;

	try {
		double y = f_exc_162(z);
		cout << "Ви ввели:" << " " << z << endl;
		cout << "Вiрна вiдповiдь: " << " " << y; system("color 1F");
	}
	catch (domain_error &res) {
		cout << res.what(); system("color 4F");
	}

	cout << endl;
	system("pause");

	return 0;
}