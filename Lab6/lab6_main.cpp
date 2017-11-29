// Розробник програми Косих Анатолiй К-13, варiант 2

#include <iostream>
#include "../Copyright/copyright.h"
#include "functions.h"

using namespace std;

int calibration(int *frame)
{
	int choice;
	cout << " Оберiть режим заповнення масиву." << endl;
	cout << " 1 - ручне заповнення" << endl;
	cout << " 2 - автоматичне заповнення" << endl;
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
			cout << " ERROR: Необраний режим заповнення" << endl; system("color 4F"); 
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
	cout << " Програма заповнює масив двома способами, який обираєте Ви, та обчислює середнє" << endl;
	cout <<	" арифметичне iндексiв максимальних елементiв." << endl << endl;

		quantity_of_elements = calibration(limit);

		if (quantity_of_elements != -1) 
		{
			func_III(limit, quantity_of_elements); system("color 2F");
		}

		try
		{
			cout << " Середнє арифметичне: " << counting_func(limit, quantity_of_elements) << endl;
		}
		catch (domain_error &lore)
		{
			cout << lore.what() << endl;
		}

	system("pause");
}