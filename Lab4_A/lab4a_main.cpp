// Розробник програми Косих Анатолій К-13

#include <iostream>
#include "..\Copyright\Copyright.h"
#include "..\Functions\Functions.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double z;
	double y;
	Copyright();
	cout << "Програма проводить обислення виразу log_5 (7*х) + П/18 за введеним Х" << endl;
	cout << "Введiть X > 0" << endl;
	cin >> z;
	bool logic = f_162(z, y);
	cout << "Ви ввели:" << " " << z << endl;
	if (logic)
	{
		cout << "Вiрна вiдповiдь:" << " " << y << endl;  system("color 1F");
	}
	else
	{
		cout << "Неможливо обчислити" << endl; system("color 4F");
	}
	system("pause");

	return 0;
}