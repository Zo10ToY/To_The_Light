// ��������� �������� ����� ������� �-13

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
	cout << "�������� ��������� ��������� ������ log_5 (7*�) + �/18 �� �������� �" << endl;
	cout << "����i�� X > 0" << endl;
	cin >> z;
	bool logic = f_162(z, y);
	cout << "�� �����:" << " " << z << endl;
	if (logic)
	{
		cout << "�i��� �i����i��:" << " " << y << endl;  system("color 1F");
	}
	else
	{
		cout << "��������� ���������" << endl; system("color 4F");
	}
	system("pause");

	return 0;
}