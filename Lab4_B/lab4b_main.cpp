// ��������� �������� ����� ������i� �-13

#include <iostream>
#include "../Copyright/copyright.h"
#include "../Functions/functions.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double z;
	Copyright();
	cout << "�������� ��������� ��������� ������ log_5 (7*�) + �/18 �� �������� �" << endl;
	cout << "����i�� X > 0" << endl;
	cin >> z;

	try {
		double y = f_exc_162(z);
		cout << "�� �����:" << " " << z << endl;
		cout << "�i��� �i����i��: " << " " << y; system("color 1F");
	}
	catch (domain_error &res) {
		cout << res.what(); system("color 4F");
	}

	cout << endl;
	system("pause");

	return 0;
}