// Розробник програми Косих Анатолiй К-13, варiант 2

#include <iostream>
#include <time.h>

using namespace std;

int func_I(int *fall)
{
	cin.exceptions(ios_base::failbit); 
	int qu = 0;
	while (qu < 1000)
	{
		cout << " " << qu << ": ";
		try
		{
			cin >> *(fall + qu);
		}
		catch (exception)
		{
			break;
		}
		qu++;
	}
	return qu;
}

int func_II(int *fall)
{
	srand((unsigned int)time(NULL));
	int range;
	int qu = 0;
	cout << " Введiть кiлькiсть бажаних елементiв: ";
	cin >> range;
	while (qu < range)
	{
		*(fall + qu) = rand() - RAND_MAX / 2;
		qu++;
	}
	return range;
}

void func_III(int *fall, int run)
{
	int qu = 0;
	cout << " Масив: ";
	while (qu < run)
	{
		cout << *(fall + qu);
		if (qu < run - 1)
		{
			cout << ", ";
		}
		qu++;
	}
	if (run == 0)
	{
		cout << " Масив порожнiй" << endl;
	}
	else
	{
		cout << "." << endl << endl;
	}
}

double counting_func(int *fall, int run)
{
	int qu = 1;
	int max = *fall;
	int sky = 0;
	int qu_max = 0;
	int upper = 0;
	double average;

	while (qu < run)
	{
		if (*(fall + qu) > max)
		{
			max = *(fall + qu);
		}
		qu++;
	}
	qu = 0;
	while (qu < run)
	{
		if (*(fall + qu) == max)
		{
			qu_max = qu_max + 1;
			sky = sky + qu;
		}
		qu++;
	}
	if (qu_max > 0)
	{
		average = (double)sky / qu_max;
		return  average;
	}
	else
	{
		throw domain_error(" Неможливо обчислити");
	}
}