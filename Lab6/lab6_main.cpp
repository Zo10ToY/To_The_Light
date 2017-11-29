// ��������� �������� ����� ������i� �-13, ���i��� 2

#include <iostream>
#include "../Copyright/copyright.h"
#include "functions.h"

using namespace std;

int calibration(int *frame)
{
	int choice;
	cout << " ����i�� ����� ���������� ������." << endl;
	cout << " 1 - ����� ����������" << endl;
	cout << " 2 - ����������� ����������" << endl;
	cout << " ";
	cin >> choice; cout << endl;

	if (choice == 1) 
	{
		system("color 1F");
		return func_I(frame);
	}
	else
	{
		if (choice == 2)
		{
			system("color 6F");
			return func_II(frame);
		}
		else
		{
			cout << " ERROR: ��������� ����� ����������" << endl; system("color 4F"); 
			return -1;
		}
	}
}

void main()
{
	setlocale(LC_ALL, "Ukrainian"); system("color 0F");
	int limit[1000];
	int quantity_of_elements;
	Copyright(); cout << endl;
	cout << " �������� �������� ����� ����� ���������, ���� ������� ��, �� �������� ������" << endl;
	cout <<	" ����������� i�����i� ������������ �������i�." << endl << endl;

		quantity_of_elements = calibration(limit);

		if (quantity_of_elements != -1) 
		{
			func_III(limit, quantity_of_elements); system("color 2F");
		}

		try
		{
			cout << " ������ �����������: " << counting_func(limit, quantity_of_elements) << endl;
		}
		catch (domain_error &lore)
		{
			cout << lore.what() << endl;
		}

	system("pause");
}